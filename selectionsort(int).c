void selectionsort(int n, int vet[])
{
  int j = 0;
  int i = 0;
  int aux = v[0];
  for ( i = 0; i < (n-1); i++)
  {
    v[i] = aux;
    for ( j = 0; j< (n-1); j++)
    {
      if ( v[j] < aux)
      {
        aux = v[j];
      }
    }
  }
}
encontrar o menor valor no vetor
substituir o valor no índice
