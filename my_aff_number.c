void	my_puchar(char c)
{
  write(1, &c, 1);
}


int	main(void)
{
  int count;

  count = 0;
  while(count < 10)
  {  
    printf("%d", count);
    count++;
  };
  printf("\n");
  return(0);
}
