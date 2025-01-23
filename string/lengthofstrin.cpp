
int getlength(char name[]){
  int lenght=0;
  int i=0;
  while (name[i]!='\0')
  {
    lenght++;
    i++;
  }
  return lenght;
}