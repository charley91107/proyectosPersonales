// #include <fcntl.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int fd;
//     char *line;

//     fd = open("example.txt", O_RDONLY);
//     if (fd == -1)
//     {
//         perror("Error opening file");
//         return 1;
//     }
//     while ((line = get_next_line(fd)) != NULL)
//     {
//         printf("%s\n", line);
//         free(line);
//     }
//     close(fd);
//     return 0;
// }

// int    main(void)
// {
//     int fd;

//     char *all = NULL;
//     char *front = NULL;
//     char *buffer = NULL;


//     fd = open("./prueba.txt", O_RDONLY);

//     while((buffer = get_next_line(fd)))
//     {
//         printf("%s\n", buffer);
//         free_all(&buffer);
//     }


//     close(fd);

//     // printf("Str buffer: %s\n", front);
//     // printf("number buffer: %d\n\n", BUFFER_SIZE);
//     // printf("number nb_char: %d\n", nb_char);
//     // printf("number nb_bytes: %d", nb_bytes);
//     printf("STR: %s\n", buffer);
//     printf("ALL: %s\n", all);
//     printf("FRONT: %s", front);

//     free_all(&all);
//     free_all(&front);
//     free_all(&buffer);
//     return (0);
// }

// #include <stdio.h>
// int main()
// {
//     char    *line;
//     int     fd;

//     //fd = 0;
//     fd = open("example.txt", O_RDONLY);
//     if (fd == -1)
//     {
//         close(fd);
//         return (0);
//     }
//     line = "";
//     while (line != NULL)
//     {
//         line = get_next_line(fd);
//         if (!line)
//         {
//             free (line);
//             break;
//         }
//         printf("%s", line);
//         free(line);
//     }
//     printf("%s", line);
//     free(line);
//     close(fd);
//     system("leaks -q a.out");
//     return (0);
// }

// #include <stdio.h>
// #include <time.h>
// int    main(void)
// {
//      int fd;

//      fd = open("example.txt", O_RDONLY);
//      char *s;
//     clock_t start = clock();
//      while ((s = get_next_line(fd)))
//      {
//         //printf("===================================\n");
//         //printf("RETURN ----> %s", s);
//         //printf("===================================\n");
//          free(s);
//      }
//     //printf("RETURN ----> %s", s);
//     //printf("===================================\n");
//     float seconds = (float)(clock() - start) / CLOCKS_PER_SEC;
//     printf ("%.2f ds\n", seconds);
//     // system("leaks a.out");
//      return (0);
// }


//int main(void)
//{
//    int     fd;
//    char    *str;
//    int     i;
//
//    i = 0;
//    fd = open("example.txt", O_RDONLY);
//    while ((i <= 6))
//    {
//        str = get_next_line(fd);
//        printf("line %i=>%s\n", i + 1, str);
//        free(str);
//        i++;
//    }
//    printf("BUFFER_SIZE = %d\n", BUFFER_SIZE);
//    return (0);
//}
