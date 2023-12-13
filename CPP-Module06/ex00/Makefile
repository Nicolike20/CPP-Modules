NAME = bureaucrats

CXX = c++

CXXFLAGS = -std=c++98 -Wall -Werror -Wextra -MMD

# Sources

SRCS = main.cpp ScalarConverter.cpp

OBJS = $(SRCS:%.cpp=%.o)

DEPS = $(SRCS:%.cpp=%.d)

# Rules

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

ifeq ($(UNAME_S),Linux)
sanitize: CFLAGS += -pedantic -g3 -fsanitize=address -fsanitize=leak -fsanitize=undefined -fsanitize=bounds -fsanitize=null
endif
ifeq ($(UNAME_S),Darwin)
sanitize: CFLAGS += -pedantic -g3 -fsanitize=address
endif
sanitize: $(NAME)

%.o: %.cpp | $(OBJS_PATH)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH)

clean:
	rm -rf $(OBJS)
	rm -rf $(DEPS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

PHONY. = all sanitize clean fclean re
