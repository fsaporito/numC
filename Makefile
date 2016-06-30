# C compiler
CC=/usr/bin/gcc

# Output Path
OUT=./Bin

# Prefix Path
PREFIX=/usr/local


# Software Name
NAME=numC
NAME_TEST=${NAME}_TEST


# Compiler Flags:
# -O3  =>  Maximum Optimisation Level
# -finline_functions =>  Consider All Functions For Inlining
# -findirect-inlining => 
# -fexpensive-optimizations => Add More Minor TIme Consuming Optimisations
# -g => Adds Debug Informations To The Executable File
# -Wall => Turns On Most Of Compiler Warnings
CFLAGS=-O3 -finline-functions -findirect-inlining -fexpensive-optimizations -fopenmp
DEBUG=-g -Wall -Wshadow -Wpointer-arith -Wcast-qual -Wstrict-prototypes -Wmissing-prototypes
LIB=-shared
LIB_LOAD = -L ${OUT} -l :${NAME}.so


# Add Math Library
MATH=-lm


# Headers Path
HEADERS=./Combinatory/combinatory.h \
		./Integrals/integrals.h \
		./Matrices/matrix.h \
		./NumberTheory/number_theory.h \
		./Roots/roots.h \
		./StatisticDescriptive/statistic_descriptive.h \
		./Vectors/vector.h
		
HEADERS_TEST =./Test/test.h \
			  ${OUT}/${NAME}.h


# Source Code Files
COMBINATORY=./Combinatory/bynomial_factor.c \
			./Combinatory/combination_simple.c \
			./Combinatory/combination_rep.c \
			./Combinatory/disposition_simple.c \
			./Combinatory/disposition_rep.c \
			./Combinatory/permutation_simple.c \
			./Combinatory/permutation_rep.c
			
INTEGRALS=./Integrals/integ_rect.c \
		  ./Integrals/integ_trap.c \
		  ./Integrals/integ_cav_simpson.c
		  
MATRICES=./Matrices/determinant.c \
		 ./Matrices/matrix_print.c \
	     ./Matrices/submatrix.c \
	     ./Matrices/swap.c
		  
NUMBER_THEORY=./NumberTheory/factorial.c \
			  ./NumberTheory/perfect.c \
			  ./NumberTheory/prime.c

ROOTS=./Roots/dicotomic.c \
	  ./Roots/cords.c \
	  ./Roots/newton.c
	  
STATISTIC_DESCRIPTIVE=./StatisticDescriptive/central_tendency.c \
					  ./StatisticDescriptive/dispersion.c
					  
TEST=./Test/test.c \
	 ./Test/test_matrix.c \
	 ./Test/test_statistic_descriptive.c
					  
VECTORS=./Vectors/vector_el_div.c \
		./Vectors/vector_el_mult.c \
		./Vectors/vector_el_sub.c \
		./Vectors/vector_el_sum.c \
		./Vectors/vector_num_div.c \
		./Vectors/vector_num_mult.c \
		./Vectors/vector_num_sub.c \
		./Vectors/vector_num_sum.c \
		./Vectors/vector_reverse.c \
		./Vectors/vector_square_power.c \
		./Vectors/vector_vector_div.c \
		./Vectors/vector_vector_inner.c \
		./Vectors/vector_vector_mult.c \
		./Vectors/vector_vector_sub.c \
		./Vectors/vector_vector_sum.c

SOURCE=${COMBINATORY} ${INTEGRALS} ${MATRICES} ${NUMBER_THEORY} ${ROOTS} ${STATISTIC_DESCRIPTIVE} ${VECTORS}

SOURCE_TEST= ${TEST}


# Make
all:
	# Make Clean
	make clean
	
	# GCC Compiler -> Library Compilation
	${CC} -o ${OUT}/${NAME}.so ${SOURCE} ${HEADERS} ${CFLAGS} ${MATH} ${LIB}
	
	# Creating The Library Header File
	echo "#ifndef _NUMC_H" >> ${OUT}/${NAME}.h
	echo "#define _NUMC_H" >> ${OUT}/${NAME}.h
	echo "" >> ${OUT}/${NAME}.h
	
	# Add standard libraries headers
	echo "#include \"stdio.h"\" >> ${OUT}/${NAME}.h
	echo "#include \"stdlib.h"\" >> ${OUT}/${NAME}.h
	echo "#include \"math.h"\" >> ${OUT}/${NAME}.h
	echo "" >> ${OUT}/${NAME}.h
	
	# Remove #include, #ifndef and #endif lines from the original headers
	cat ${HEADERS} | sed '/#include/ d' | sed '/#ifndef/ d' | sed '/#endif/ d' | sed '/#define _/ d' >> ${OUT}/${NAME}.h
	echo "" >> ${OUT}/${NAME}.h
	echo "#endif\n" >> ${OUT}/${NAME}.h

	# Copy Files In Main Directory
	cp ${OUT}/${NAME}.so ${NAME}.so
	cp ${OUT}/${NAME}.h ${NAME}.h
	
debug:
	# Make Clean
	make clean
	
	# GCC Compiler -> Library Compilation (With Debug Enabled)
	${CC} -o ${OUT}/${NAME} ${SOURCE} ${HEADERS} ${CFLAGS} ${DEBUG} ${MATH} ${LIB}
	
	# Creating The Library Header File
	echo "#ifndef _NUMC_H" >> ${OUT}/${NAME}.h
	echo "#define _NUMC_H" >> ${OUT}/${NAME}.h
	echo "" >> ${OUT}/${NAME}.h
	
	# Add standard libraries headers
	echo "#include \"stdio.h"\" >> ${OUT}/${NAME}.h
	echo "#include \"stdlib.h"\" >> ${OUT}/${NAME}.h
	echo "#include \"math.h"\" >> ${OUT}/${NAME}.h
	echo "" >> ${OUT}/${NAME}.h
	
	# Remove #include, #ifndef and #endif lines from the original headers
	cat ${HEADERS} | sed '/#include/ d' | sed '/#ifndef/ d' | sed '/#endif/ d' | sed '/#define _/ d' >> ${OUT}/${NAME}.h
	echo "" >> ${OUT}/${NAME}.h
	echo "#endif\n" >> ${OUT}/${NAME}.h

	# Copy Files In Main Directory
	cp ${OUT}/${NAME}.so ${NAME}.so
	cp ${OUT}/${NAME}.h ${NAME}.h

test:
	#make all
	${CC} -o ${OUT}/${NAME_TEST} ${SOURCE_TEST} ${HEADERS_TEST} ${CFLAGS} ${MATH} ${LIB_LOAD}
	cp ${OUT}/${NAME_TEST} ${NAME_TEST}
	
clean:
	-rm -f ${NAME}
	-rm -f ${OUT}/${NAME}
	-rm -f ${NAME}.so
	-rm -f ${OUT}/${NAME}.so
	-rm -f ${NAME}.h
	-rm -f ${OUT}/${NAME}.h
	-rm -f ${NAME_TEST}
	-rm -f ${OUT}/${NAME_TEST}

install:
	install -s ${OUT}/${NAME}.so ${PREFIX}/lib

uninstall:
	-rm -f ${PREFIX}/bin/${NAME}
