#include <bits/stdc++.h>
using namespace std;
int hw1[900]={10011001,10100101,10111101,10200201,10211201,10300301,10400401,10500501,10600601,10700701,10800801,10900901,11011011,11100111,11111111,11200211,11211211,11300311,11400411,11500511,11600611,11700711,11800811,11900911,12011021,12100121,12111121,12200221,12211221,12300321,12400421,12500521,12600621,12700721,12800821,12900921,13011031,13100131,13211231,13300331,13500531,13700731,13800831,20011002,20100102,20111102,20200202,20211202,20300302,20400402,20500502,20600602,20700702,20800802,20900902,21011012,21100112,21111112,21200212,21211212,21300312,21400412,21500512,21600612,21700712,21800812,21900912,22011022,22100122,22111122,22200222,22211222,22300322,22400422,22500522,22600622,22700722,22800822,22900922,30011003,30100103,30111103,30200203,30211203,30300303,30400403,30500503,30600603,30700703,30800803,30900903,31011013,31100113,31111113,31200213,31211213,31300313,31400413,31500513,31600613,31700713,31800813,31900913,32011023,32100123,32111123,32200223,32211223,32300323,32400423,32500523,32600623,32700723,32800823,32900923,40011004,40100104,40111104,40200204,40211204,40300304,40400404,40500504,40600604,40700704,40800804,40900904,41011014,41100114,41111114,41200214,41211214,41300314,41400414,41500514,41600614,41700714,41800814,41900914,42011024,42100124,42111124,42200224,42211224,42300324,42400424,42500524,42600624,42700724,42800824,42900924,50011005,50100105,50111105,50200205,50211205,50300305,50400405,50500505,50600605,50700705,50800805,50900905,51011015,51100115,51111115,51200215,51211215,51300315,51400415,51500515,51600615,51700715,51800815,51900915,52011025,52100125,52111125,52200225,52211225,52300325,52400425,52500525,52600625,52700725,52800825,52900925,60011006,60100106,60111106,60200206,60211206,60300306,60400406,60500506,60600606,60700706,60800806,60900906,61011016,61100116,61111116,61200216,61211216,61300316,61400416,61500516,61600616,61700716,61800816,61900916,62011026,62100126,62111126,62200226,62211226,62300326,62400426,62500526,62600626,62700726,62800826,62900926,70011007,70100107,70111107,70200207,70211207,70300307,70400407,70500507,70600607,70700707,70800807,70900907,71011017,71100117,71111117,71200217,71211217,71300317,71400417,71500517,71600617,71700717,71800817,71900917,72011027,72100127,72111127,72200227,72211227,72300327,72400427,72500527,72600627,72700727,72800827,72900927,80011008,80100108,80111108,80200208,80211208,80300308,80400408,80500508,80600608,80700708,80800808,80900908,81011018,81100118,81111118,81200218,81211218,81300318,81400418,81500518,81600618,81700718,81800818,81900918,82011028,82100128,82111128,82200228,82211228,82300328,82400428,82500528,82600628,82700728,82800828,82900928,90011009,90100109,90111109,90200209,90211209,90300309,90400409,90500509,90600609,90700709,90800809,90900909,91011019,91100119,91111119,91200219,91211219,91300319,91400419,91500519,91600619,91700719,91800819,91900919,92011029,92100129,92111129,92200229,92211229,92300329,92400429,92500529,92600629,92700729,92800829,92900929};
int hw2[900]={10100101,11111111,20200202,21211212,30300303,40400404,50500505,60600606,70700707,80800808,90900909};
int T;
int trans(char c)
{
	return int(c-'0');
}
int main()
{	
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int year=trans(s[0])*1000+trans(s[1])*100+trans(s[2])*10+trans(s[3]);
		int month=trans(s[4])*10+trans(s[5]);
		int day=trans(s[6])*10+trans(s[7]);
		int now=year*10000+month*100+day;
		
		int cnt=0;
		while(now>=hw1[cnt]) cnt++;
		cout<<hw1[cnt]<<endl;
		
		cnt=0;
		while(now>=hw2[cnt]) cnt++;
		cout<<hw2[cnt]<<endl;
	}
    
    return 0;
}


