  #include <iostream>
  #include <cstdio>
  using namespace std;

  int main()
  {
      int n,min_index=0,c=1;
      long long int min_number=1000000001;
      long long int number;
      scanf("%d",&n);
      for(int i=1;i<=n;i++)
      {
          scanf("%lld",&number);
          if(min_number>number)
          {
              min_number=number;
              min_index=i;
              c=1;
          }
          else if(min_number==number)
          {
              c+=1;
          }
      }
      if(c==1)
      {
          cout<<min_index<<endl;
      }
      else{
         cout<<"Still Rozdil"<<endl;
      }
      return 0;
  }
