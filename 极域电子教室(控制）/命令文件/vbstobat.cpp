#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	cout<<"请将要转换的vbs文件命名为1.vbs"<<endl;
	cout<<"完成后按回车继续"<<endl;
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
