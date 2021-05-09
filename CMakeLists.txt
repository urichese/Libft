# cmake_minimum_required(VERSION <specify CMake version here>)
project(libft C)

set(CMAKE_C_STANDARD 99)

add_executable(libft main.c ft_split.c ft_strtrim.c ft_itoa.c ft_substr.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c)