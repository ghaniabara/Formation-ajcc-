int main()
{
  int val1=1;
  int *val2=2;
  val2=&val1;
  val2++;
  int val3=3;
  int val4=4;

  printf ("la valeur de val1 est %d\n",val1);
  printf ("la valeur de val2 est %p\n",(void*)&val2);
  printf ("la valeur de val2 est %d\n",val2);


  return 0;
}
