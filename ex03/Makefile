NAME = bsp

SRC = main.cpp Fixed.cpp bsp.cpp Point.cpp

OBJ = $(SRC:.cpp=.o)

HDR = Fixed.h Point.h

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -pedantic -std=c++98


all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(LDFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(HDR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	- $(RM) $(OBJ)

fclean: clean
	- $(RM) $(NAME)

re: fclean
	$(MAKE) all