#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	cout<<"�뽫Ҫת����vbs�ļ�����Ϊ1.vbs"<<endl;
	cout<<"��ɺ󰴻س�����"<<endl;
	getchar();
	freopen("2.bat","w",stdout);
	
	freopen("1.vbs","r",stdin);
	
	char vbscode[100];
	cout<<"del /f /q "<<'"'<<"C:/heihei.vbs"<<'"'<<endl;
	
	
	while(gets(vbscode)!=NULL)
		{
			cout<<"echo ";
			for(int i=0; i<=strlen(vbscode)-1; i++)
				{
					char c=vbscode[i];
					if((c>='0'&&c<='9')||(c>='A'&&c<='Z')||(c>='a'&&c<='z'))
						cout<<vbscode[i];
					else cout<<'^'<<vbscode[i];
				}
			cout<<" >>C:/heihei.vbs"<<endl;
		}
	
	cout<<"start C:/heihei.vbs"<<endl;
}
