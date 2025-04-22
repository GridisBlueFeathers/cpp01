# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 16:39:18 by svereten          #+#    #+#              #
#    Updated: 2025/04/22 17:17:57 by svereten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = violence

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra --std=c++98 -MMD -MP

OBJ_DIR = obj

FILES = main \
		Weapon \
		HumanA \
		HumanB \

OBJS = ${FILES:%=${OBJ_DIR}/%.o}
DEPS = ${FILES:%=${OBJ_DIR}/%.d}

OBJ_DIRS = ${sort ${dir ${OBJS}}}

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} $^ -o $@

${OBJ_DIR}/%.o: %.cpp | ${OBJ_DIRS}
	${CXX} ${CXXFLAGS} -c $< -o $@

${OBJ_DIRS}:
	mkdir -p $@

clean:
	rm -rf ${OBJ_DIR}

fclean: clean
	rm -rf ${NAME}

re: fclean all

-include ${DEPS}

run: ${NAME}
	./${NAME}

valgrind: ${NAME}
	valgrind ./${NAME}

.PHONY: all clean fclean re run valgrind
