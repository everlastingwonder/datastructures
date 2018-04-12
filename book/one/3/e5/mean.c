/* Mean:  calculate the mean of an array of n numbers		*/
double Mean(double v[], int n)
{
     int i;
     double sum = 0.0;

     for (i = 0; i < n; i++)
          sum += v[i];
     return sum / n;    
}
