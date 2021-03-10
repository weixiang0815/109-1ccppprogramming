#include<bits/stdc++.h>
using namespace std;
int main(){
	char poem[]="漢皇重色思傾國御宇多年求不得楊家有女初長成養在深閏人未識天生麗質難自棄一朝選在君王側回眸一笑百媚生六宮粉黛無顏色春寒賜浴華清池溫泉水滑洗凝脂侍兒扶起嬌無力始是新承恩澤時雲鬢花顏金步搖芙蓉帳暖度春宵春宵苦短日高起從此君王不早朝承歡侍宴無閑暇春從春遊夜專夜後宮佳麗三千人三千寵愛在一身金屋妝成嬌侍夜玉樓宴罷醉和春姊妹弟兄皆列士可憐光彩生門戶遂令天下父母心不重生男重生女驪宮高處入青雲仙樂風飄處處聞緩歌慢舞凝絲竹盡日君王看不足漁陽鼙鼓動地來驚破霓裳羽衣曲九重城闕煙塵生千乘萬騎西南行翠華搖搖行復止西出都門百餘里六軍不發無奈何宛轉蛾眉馬前死花鈿委地無人收翠翹金雀玉搔頭君王掩面救不得回看血淚相和流黃埃散漫風蕭索雲棧縈紆登劍閣峨嵋山下少人行旌旗無光日色薄蜀江水碧蜀山青聖主朝朝暮暮情行宮見月傷心色夜雨聞鈴腸斷聲天旋地轉迴龍馭到此躊躇不能去馬嵬坡下泥土中不見玉顏空死處君臣相顧盡霑衣東望都門信馬歸歸來池苑皆依舊太液芙蓉未央柳芙蓉如面柳如眉對此如何不淚垂春風桃李花開日秋雨梧桐葉落時西宮南內多秋草落葉滿階紅不掃梨園子弟白髮新椒房阿監青娥老夕殿螢飛思悄然孤燈挑盡未成眠遲遲鐘鼓初長夜耿耿星河欲曙天鴛鴦瓦冷霜華重翡翠衾寒誰與共悠悠生死別經年魂魄不曾來入夢臨邛道士鴻都客能以精誠致魂魄為感君王輾轉思遂教方士殷勤覓排空馭氣奔如電升天入地求之遍上窮碧落下黃泉兩處茫茫皆不見忽聞海上有仙山山在虛無縹緲間樓閣玲瓏五雲起其中綽約多仙子中有一人字太真雪膚花貌參差是金闕西廂叩玉扃轉教小玉報雙成聞道漢家天子使九華帳裡夢魂驚攬衣推枕起徘徊珠箔銀屏迤邐開雲鬢半偏新睡覺花冠不整下堂來風吹仙袂飄飄舉猶似霓裳羽衣舞玉容寂寞淚闌干梨花一枝春帶雨含情凝睇謝君王一別音容兩渺茫昭陽殿裡恩愛絕蓬萊宮中日月長回頭下望人寰處不見長安見塵霧唯將舊物表深情鈿合金釵寄將去釵留一股合一扇釵擘黃金合分鈿但教心似金鈿堅天上人間會相見臨別殷勤重寄詞詞中有誓兩心知七月七日長生殿夜半無人私語時在天願作比翼鳥在地願為連理枝天長地久有時盡此恨綿綿無絕期";
	char test[]="天";
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
	//掃描到的第一個字一定會是不可見字元(不知道為什麼) 
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
	//依照出現次數(count[])排序漢字(由多到少) 
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
	//依照unicode將出現次數相同的漢字排序(由小到大)
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
				if(/*如何按照unicode判斷順序*/){
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
