#include<bits/stdc++.h>
using namespace std;
int main(){
	char poem[]="�~�ӭ����ɰ�s�t�h�~�D���o���a���k������i�b�`�|�H���Ѥѥ��R�����۱�@�¿�b�g�����^���@���ʴA�ͤ��c���L�L�C��K�H��D�زM���Ŭu���Ƭ~���רͨ�߰_�b�L�O�l�O�s�Ӯ��A�ɶ��K���C���B�n�ܻT�b�x�׬K�d�K�d�W�u�鰪�_�q���g�������©��w�ͮb�L�~�v�K�q�K�C�]�M�]��c���R�T�d�H�T�d�d�R�b�@�����Χ����b�ͩ]�ɼӮb�}�K�M�K�n�f�̥S�ҦC�h�i�����m�ͪ���E�O�ѤU�����ߤ����ͨk���ͤk�z�c���B�J�C���P�֭��ƳB�B�D�w�q�C�R�����˺ɤ�g���ݤ��������g���ʦa����}�O�n�Ц禱�E�������ϹХͤd���U�M��n��A�طn�n��_���X�����ʾl�����x���o�L�`��{�฿�ܰ��e����f�e�a�L�H���A¼�����ɷk�Y�g�������Ϥ��o�^�ݦ�\�۩M�y���J�������������̿����n�C�ծo�ݤs�U�֤H��ܺX�L��������������Ѹ��s�C�t�D�´¼ǼǱ���c����ˤߦ�]�B�D�a�z�_�n�ѱۦa��j�s���즹�C�ܤ���h���R�Y�U�d�g���������C�Ŧ��B�g�ڬ��U���L��F�泣���H���k�k�Ӧ��b�Ҩ��¤ӲG�ܻT�����h�ܻT�p���h�p�ܹ惡�p�󤣲\���K�������}���B��中���ɦ�c�n���h��󸨸���������������l�̥վv�s�ԩЪ��ʫC�Z�Ѥi���í��䮨�M�t�O�D�ɥ����v�����������]�կլP�e���Ƥ��p�m�˧N���ح��B�A�ڴH�ֻP�@�y�y�ͦ��O�g�~��z�����ӤJ���{�T�D�h�E���ȯ�H��ۭP��z���P�g�������E�Ф�h��ԳV�ƪŶ���b�p�q�ɤѤJ�a�D���M�W�a�Ѹ��U���u��B���Ҥ������D���W���P�s�s�b��L�e�z���ӻլ��n�����_�䤤����h�P�l�����@�H�r�ӯu�����Ừ�Ѯt�O������[�n������Фp�ɳ������D�D�~�a�Ѥl�ϤE�رb�̹ڻ��������E�_�r�ޯ]��ȫ̭��ݶ}���K�b���s��ı��a����U��ӭ��j�P�L�����|�S���O�n�Ц�R�ɮe�I��\��z����@�K�K�a�B�t����ڻ�§g���@�O���e�����L�����̮��R�����ܮc�������^�Y�U��H�ȳB�������w�������߱N�ª���`���f�X�����H�N�h���d�@�ѦX�@�����������X���f���Фߦ����f��ѤW�H���|�ۨ��{�O��ԭ��H���������}��ߪ��C��C����ͷ��]�b�L�H�p�y�ɦb���@�@���l���b�a�@���s�z�K�Ѫ��a�[���ɺɦ�������L����";
	char test[]="��";
  	int l=strlen(poem),m=strlen(test),n=l/m;
	char words[n][m+1];
	for(int i=0;i<n;i++){
		strcpy(words[i],"");
		words[i][m]='\0';
	}
	int count[n],k=1;
	for(int i=0;i<n;i++){
	  	count[i]=0;
	}
	char key[m+1];
	strcpy(key,"");
	//���y�쪺�Ĥ@�Ӧr�@�w�|�O���i���r��(�����D������) 
	for(int i=0;i<l;i+=m){
		for(int j=i;j<i+m;j++){
			key[j-i]=poem[j];
		}
		key[m]='\0';
		bool existed=false;
		for(int j=0;j<k;j++){
			if(strcmp(key,words[j])==0){
				count[j]++;
				existed=true;
				break;
			}
		}
		if(existed==false){
			k++;
			strcpy(words[k-1],key);
			count[k-1]++;
		}
		strcpy(key,"");
	}
	//�̷ӥX�{����(count[])�ƧǺ~�r(�Ѧh���) 
	for(int i=0;i<k;i++){
		bool changed=false;
		for(int j=0;j<k-1;j++){
			if(count[j]<count[j+1]){
				char temp1[strlen(words[j])];
				strcpy(temp1,"");
				strcpy(temp1,words[j]);
				strcpy(words[j],"");
				strcpy(words[j],words[j+1]);
				strcpy(words[j+1],temp1);
				int temp2=count[j];
				count[j]=count[j+1];
				count[j+1]=temp2;
				changed=true;
			}
		}
		if(changed==false){
			break;
		}
	}
	//�̷�unicode�N�X�{���ƬۦP���~�r�Ƨ�(�Ѥp��j)
	for(int i=0;i<k;i++){
		int num=1;
		for(int j=i;j<k;j++){
			if(count[j]!=count[j+1]){
				break;
			}
			else{
				num++;
			}
		}
		if(num==1){
			continue;
		}
		for(int j=0;j<num;j++){
			bool changed=false;
			for(int l=0;l<num-1;l++){
				if(/*�p�����unicode�P�_����*/){
					char temp[strlen(words[l])];
					strcpy(temp,"");
					strcpy(temp,words[l]);
					strcpy(words[l],"");
					strcpy(words[l],words[l+1]);
					strcpy(words[l+1],"");
					strcpy(words[l+1],temp);
					changed=true;
				}
			}
			if(changed==false){
				break;
			}
		}
		i+=num-1;
	}
	for(int i=0;i<k-1;i++){
		cout<<words[i]<<" "<<count[i]<<endl;
	}
	return 0;
}
