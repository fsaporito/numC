# C compiler
CC=/usr/bin/gcc

# Output Path
OUT=./Bin

# Prefix Path
PREFIX=/usr/local


# Software Name
NAME=numC
NAMETEST=${NAME}_TEST


# Compiler Flags:
# -O3  =>  Maximum Optimisation Level
# -finline_functions =>  Consider All Functions For Inlining
# -findirect-inlining => 
# -fexpensive-optimizations => Add More Minor TIme Consuming Optimisations
# -g => Adds Debug Informations To The Executable File
# -Wall => Turns On Most Of Compiler Warnings
CFLAGS=-O3 -finline-functions -findirect-inlining -fexpensive-optimizations -fopenmp
DEBUG=-g -Wall -Wshadow -Wpointer-arith -Wcast-qual -Wstrict-prototypes -Wmissing-prototypes
LIB=-shared -static


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
		
HEADERS_TEST =${HEADERS} ./Test/test.h


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

SOURCE_TEST=${SOURCE} ${TEST}


# Make
all:
	#GCC Compiler
	${CC} -o ${OUT}/${NAME}.so ${SOURCE} ${HEADERS} ${CFLAGS} ${MATH} ${LIB}
	# Creating The Header File
	echo "#ifndef _NUMC_H" >> ${OUT}/${NAME}.h
	echo "#define _NUMC_H" >> ${OUT}/${NAME}.h
	echo "" >> ${OUT}/${NAME}.h
	# Add standard libraries headers
	echo "#include \"stdin.h"\" >> ${OUT}/${NAME}.h
	echo "#include \"stdlib.h"\" >> ${OUT}/${NAME}.h
	echo "#include \"math.h"\" >> ${OUT}/${NAME}.h
	echo "" >> ${OUT}/${NAME}.h
	# Remove #include lines from the original headers
	cat ${HEADERS} | sed '/#include/ d' >> ${OUT}/${NAME}.h
	echo "" >> ${OUT}/${NAME}.h
	echo "#endif\n" >> ${OUT}/${NAME}.h
	
debug:
	${CC} -o ${OUT}/${NAME} ${SOURCE} ${HEADERS} ${CFLAGS} ${DEBUG} ${MATH} ${LIB}
	
test:
	${CC} -o ${OUT}/${NAMETEST} ${SOURCE_TEST} ${HEADERS_TEST} ${CFLAGS} ${DEBUG} ${MATH}
	
clean:
	-rm -f ${NAME}
	-rm -f ${OUT}/${NAME}
	-rm -f ${NAME}.so
	-rm -f ${OUT}/${NAME}.so
	-rm -f ${NAME}.h
	-rm -f ${OUT}/${NAME}.h
	-rm -f ${NAMETEST}
	-rm -f ${OUT}/${NAMETEST}

install:
	install -s ${OUT}/${NAME}.so ${PREFIX}/bin

uninstall:
	-rm -f ${PREFIX}/bin/${NAME}
