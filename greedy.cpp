// 
#include<iostream>
void sort(int a[],double w[],int n)
{

for(int i=0;i<n;i++)
{  
     for(int j=i+1;j<n;j++)
        {
           if(a[i]>a[j])
                  {int temp1=a[i];
                  a[i]=a[j];
                    a[j]=temp1;
                  double temp2=w[i];
                          w[i]=w[j];
                               w[j]=temp2;
                            }
             }

}


}


int main()
{

int p[10];
int obj;
double W,x[10],w[10];
std::cout<<"how many objects are required to enter:  ";
std::cin>>obj;
std::cout<<"enter max size of bag:  ";
std::cin>>W;

for(int i=0;i<obj;i++)
{std::cout<<"enter profit :";
std::cin>>p[i];
std::cout<<"enter weight : ";
std::cin>>w[i];
x[i]=0.0;
}



sort(p,w,obj);
int j;
for(j=obj-1;j>=0;j--)
{
if(w[j]<=W)
   {x[j]=1.0;
       W=W-w[j];
             }
else
break;
}
if(j>=0)
{
x[j]=W/w[j];
W=0.0;
}



double pr=0.0;
for(int k=obj-1;k>=0;k--)
{pr+=x[k]*p[k];
std::cout<<pr<<std::endl;
}


std::cout<<"the total profit is: "<<pr<<std::endl;
return 0;
}
