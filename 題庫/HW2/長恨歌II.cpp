#include<bits/stdc++.h>
using namespace std;
int main(){
	string poem="�~�ӭ����ɰ�s�t�h�~�D���o���a���k������i�b�`�|�H���Ѥѥ��R�����۱�@�¿�b�g�����^���@���ʴA�ͤ��c���L�L�C��K�H��D�زM���Ŭu���Ƭ~���רͨ�߰_�b�L�O�l�O�s�Ӯ��A�ɶ��K���C���B�n�ܻT�b�x�׬K�d�K�d�W�u�鰪�_�q���g�������©��w�ͮb�L�~�v�K�q�K�C�]�M�]��c���R�T�d�H�T�d�d�R�b�@�����Χ����b�ͩ]�ɼӮb�}�K�M�K�n�f�̥S�ҦC�h�i�����m�ͪ���E�O�ѤU�����ߤ����ͨk���ͤk�z�c���B�J�C���P�֭��ƳB�B�D�w�q�C�R�����˺ɤ�g���ݤ��������g���ʦa����}�O�n�Ц禱�E�������ϹХͤd���U�M��n��A�طn�n��_���X�����ʾl�����x���o�L�`��{�฿�ܰ��e����f�e�a�L�H���A¼�����ɷk�Y�g�������Ϥ��o�^�ݦ�\�۩M�y���J�������������̿����n�C�ծo�ݤs�U�֤H��ܺX�L��������������Ѹ��s�C�t�D�´¼ǼǱ���c����ˤߦ�]�B�D�a�z�_�n�ѱۦa��j�s���즹�C�ܤ���h���R�Y�U�d�g���������C�Ŧ��B�g�ڬ��U���L��F�泣���H���k�k�Ӧ��b�Ҩ��¤ӲG�ܻT�����h�ܻT�p���h�p�ܹ惡�p�󤣲\���K�������}���B��中���ɦ�c�n���h��󸨸���������������l�̥վv�s�ԩЪ��ʫC�Z�Ѥi���í��䮨�M�t�O�D�ɥ����v�����������]�կլP�e���Ƥ��p�m�˧N���ح��B�A�ڴH�ֻP�@�y�y�ͦ��O�g�~��z�����ӤJ���{�T�D�h�E���ȯ�H��ۭP��z���P�g�������E�Ф�h��ԳV�ƪŶ���b�p�q�ɤѤJ�a�D���M�W�a�Ѹ��U���u��B���Ҥ������D���W���P�s�s�b��L�e�z���ӻլ��n�����_�䤤����h�P�l�����@�H�r�ӯu�����Ừ�Ѯt�O������[�n������Фp�ɳ������D�D�~�a�Ѥl�ϤE�رb�̹ڻ��������E�_�r�ޯ]��ȫ̭��ݶ}���K�b���s��ı��a����U��ӭ��j�P�L�����|�S���O�n�Ц�R�ɮe�I��\��z����@�K�K�a�B�t����ڻ�§g���@�O���e�����L�����̮��R�����ܮc�������^�Y�U��H�ȳB�������w�������߱N�ª���`���f�X�����H�N�h���d�@�ѦX�@�����������X���f���Фߦ����f��ѤW�H���|�ۨ��{�O��ԭ��H���������}��ߪ��C��C����ͷ��]�b�L�H�p�y�ɦb���@�@���l���b�a�@���s�z�K�Ѫ��a�[���ɺɦ�������L����";
	string key;
	cin>>key;
	string test="��";
	int loc[1000],k=0;
	for(int i=0;i<poem.length();i++){
		if(poem[i]==key[0]){
			bool fit=true;
			for(int j=i;j<i+key.length();j++){
				if(poem[j]!=key[j-i]){
					fit=false;
					break;
				}
			}
			if(fit==true){
				loc[k]=i/test.length();
				k++;
				i+=key.length()-1;
			}
		}
	}
	cout<<k<<endl;
	for(int i=0;i<k;i++){
		cout<<loc[i]<<endl;
	}
	return 0;
}
