# Libft

Collection of useful functions and reimlementations of different library's functions.

## Mandatory

### string
| Function           | Description                                                                                                           |
|--------------------|-----------------------------------------------------------------------------------------------------------------------|
| ft_strlen          | Computes the length of the string ’s’. (not protected)                                                                |
| ft_strlcpy         | Copies ’src’ to ’dst’                                                                                                 |
| ft_strlcat         | Concatenates ’src’ to ’dst’                                                                                           |
| ft_strchr          | Locates the first occurrence of the character ’c’ in the string ’s’                                                   |
| ft_strrchr         | Locates the last occurrence of the character ’c’ in the string ’s’                                                    |
| ft_strcmp          | Compares the two strings ’s1’ and ’s2’                                                                                |
| ft_strncmp         | Compares ’n’ characters of the two strings ’s1’ and ’s2’                                                              |
| ft_strncpy         | Copies at most ’len’ characters from ’src’ to ’dst’                                                                   |
| ft_strnstr         | Locates the first occurrence of ’needle’ in ’haystack’, within ’len’ characters                                       |
| ft_strdup          | Allocates a copy of ’s1’                                                                                              |
| ft_substr          | Allocates a sub-string from the string ’s’                                                                            |
| ft_strtrim         | Allocates a copy of ’s1’ with all characters specified in ’set’ removed from the beginning and the end of the string. |
| ft_split           | Splits ’s’ using the character ’c’ as a delimiter                                                                     |
| ft_strmapi         | Applies the function ’f’ to each character of ’s’, returning new string                                               |
| ft_striteri        | Applies the function ’f’ on each character of ’s’                                                                     |

### memory
| Function          | Description                                                                                     |
|-------------------|-------------------------------------------------------------------------------------------------|
| ft_calloc         | Allocates space for ’count’ elements that are ’size’ bytes of memory, filled with zeroed bytes. |
| ft_memset         | Writes ’len’ bytes of value ’c’ to the array ’b’                                                |
| ft_bzero          | Writes ’n’ zeroed bytes to the string ’s’                                                       |
| ft_memcpy         | Copies ’n’ bytes from memory area ’src’ to memory area ’dst’                                    |
| ft_memmove        | Copies ’len’ bytes from string ’src’ to string ’dst’ (non-destructive manner)                   |
| ft_memchr         | Searches for the first occurence of ’c’ in ’s’ within ’n’ bytes                                 |
| ft_memcmp         | Compares byte string ’s1’ against byte string ’s2’                                              |

### print
| Function        | Description                                                                    |
|-----------------|--------------------------------------------------------------------------------|
| ft_putchar_fd   | Outputs the character ’c’ to the given file descriptor ’fd’                    |
| ft_putstr_fd    | Outputs the string ’s’ to the given file descriptor ’fd’                       |
| ft_putendl_fd   | Outputs the string ’s’ to the given file descriptor ’fd’ followed by a newline |
| ft_putnbr_fd    | Outputs the integer ’n’ to the given file descriptor ’fd’                      |

### convert
| Function               | Description                                                             |
|------------------------|-------------------------------------------------------------------------|
| ft_toupper             | Converts a lower-case letter to the corresponding upper-case letter     |
| ft_tolower             | Converts a upper-case letter to the corresponding lower-case letter     |
| ft_atoi                | Converts the initial portion of ’str’ to int representation             |
| ft_itoa                | Converts the integer ’n’ to string representation                       |

### check
| Function           | Description                                          |
|--------------------|------------------------------------------------------|
| ft_isalpha         | Checks character for an alphabetic character         |
| ft_isdigit         | Checks character for a digit                         |
| ft_isalnum         | Checks character for an alhabetic character or digit |
| ft_isprint         | Checks character for a printable character           |
| ft_isascii         | Checks character for an ascii character              |

## Bonus

### linked list
| Function        | Description                                                                                            |
|-----------------|--------------------------------------------------------------------------------------------------------|
| ft_lstnew       | Allocates and returns a new node                                                                       |
| ft_lstadd_front | Adds the node ’new’ at the beginning of the list                                                       |
| ft_lstsize      | Counts the number of nodes in a list                                                                   |
| ft_lstlast      | Returns the last node of the list                                                                      |
| ft_lstadd_back  | Adds the node ’new’ at the end of the list                                                             |
| ft_lstdelone    | Frees the memory of the node’s content using the function ’del’ given as a parameter and free the node |
| ft_lstclear     | Deletes and frees the given node and every successor of that node, using the function ’del’ and free   |
| ft_lstiter      | Iterates the list ’lst’ and applies the function ’f’ on the content of each node                       |
| ft_lstmap       | Creates a new list resulting of the successive applications of the function ’f’                        |
