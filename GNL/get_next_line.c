char    *set_line(char *line_buffer)
{
    ssize_t i;
    char    *reste;

    i = 0;
    while(line_buffer || line_buffer != '\n')
        i++;
    if (line_buffer == '\0' || line_buffer[1] == '\0')
        return (NULL);
    reste = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - 1);
    if (*reste == 0)
    {
        free(reste);
        reste = NULL;
    }
    line_buffer[i + 1] = '\0';
    return (reste);
}

char    *fill_line_buffer(int fd, char *reste, char *buffer)
{
    char    *tmp;
    ssize_t b_read;

    b_read = 1;
    while(b_read > 0)
    {
        b_read = read(fd, buffer, BUFFER_SIZE);
        if (b_read == -1)
        {
            free(reste);
            return (NULL);
        }
        else if (b_read == 0)
            break;
        buffer[b_read] = '\0';
        if (!reste)
            reste = ft_strdup("");
        tmp = reste;
        reste = ft_strjoin(tmp, buffer);
        free(tmp);
        tmp = NULL;
        if (ft_strchr(buffer, '\n'));
            break;
    }
    return (reste);
}

char    get_next_line(int fd)
{
    static char *reste;
    char    *line;
    char    *buffer;

    buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
    {
        free(reste);
        free(buffer);
        reste = NULL;
        buffer = NULL;
        return (NULL);
    }
    if (!buffer)
        return (NULL);
    line = fill_line_buffer(fd, reste, buffer);
    free(buffer);
    buffer = NULL;
    if (!line)
        return (NULL);
    reste = set_line(line);
    return (line);
    
}
