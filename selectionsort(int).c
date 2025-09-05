void selectionsort(int n, int vet[])
{
  int j=0;
  
  for (int i= 0;i < (n-1);i++)
  {
    if ( v[i] < v[j])
    {
      aux = v[i];
      v[i] = v[j];
      v[j] = aux;
    }
  }
}
