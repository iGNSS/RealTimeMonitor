#pragma once
#include <string>
#include "src/rtklib.h"

using namespace std;
#define PRGNAME		"RTKCONV"


//���������� ��� �������� ���� � ����� 
string path;

//���������� ��� �������� IP-������ ���������
string ip_address;

//���������� ��� �������� ������� "�����" ������
int format;

//���������� ��� ��������� ��� ���������� ������
int stream_type;

//���������� ��� ��������� �����
string local_dir;

//����������, ��� ��������� ������ � �������
rtksvr_t rtksvr;

//���������� ��� ������ ������
stream_t monistr;

/* processing options type */
//���������� ��� ������ ���������� ��������
prcopt_t PrcOpt;

//���������� ��� �������� ���������� "�������"
solopt_t SolOpt;

//���� ������ ������ NMEA
int nmea_cycle;

//���������� NMEA
double nmea_pos;

//������� ������ 
string ResetCmd;

//���������� ��� �������� ����� � ������ � �������
char* Path[8];

//���������� ��� �������� �������� ���������� ��� ���������� ������
int Format[MAXSTRRTK];

//������� ��������� ����� ������
int SolCurrentStat;

string RcvOpt[3] = { "", "", "" };

//������� ������� ������� ����������� ������
void __fastcall SvrStart(void);

//������� �������������� ���������� ������ 
void __fastcall Timer(void);

//������� ������� ������� ���������� ������ � ����
void __fastcall SvrStartStream(char pathString[1024]);

//������� ��������� ������� ���������� ������ � ����
void __fastcall SvrStopStream(void);

//������� �������������� ������� � gtime_t
void __fastcall GetTime(gtime_t* ts, gtime_t* te, double* tint, double* tunit);

//�������� ������ ������
void __fastcall SetOutFiles(string infile);

//��������� ���������� ������� � �������������� � gtime_t
void __fastcall GetFileTime(const char* fileName);

//����������� � RINEX
void __fastcall ConvertFile(char pathString[1024]);

//���������� ���������� ������
int SvrOpt[6];

//���������� ����� ������ NMEA
int NmeaReq; 

//���������� ������ ������� �� ����� 
int FileSwapMargin;

//������������ ��������� ������
int RelayBack;

//���������� NMEA
double AntPos[3], AntOff[3];


//���������� ��� �����������

string mask = "1111111111111111111111111111111111111111111111111111111";

int RnxVer =  0;
int RnxFile = 0;
string RnxCode = "0000";
string RunBy = "";
string Marker = "";
string MarkerNo =  "";
string MarkerType = "";
string Name[2] = { "","" };
string Rec[3] = { "", "", "" };
string Ant[3] = { "", "", "" };
float AppPos[3] = { 0.0, 0.0, 0.0 };
float AntDel[3] = { 0.0, 0.0, 0.0 };
string Comment[2] = { "", "" };
string RcvOption = "";
int NavSys = 0x3;
int ObsType = 0xF;
int FreqType = 0x3;
string ExSats = "";
int TraceLevel = 0;
gtime_t RnxTime;

string CodeMask[7] = { 
	"1111111100000111111111111100000000000000000000000000000", 
	"1100000000000100001000000000000000000000000111000000000", 
	"1000000001111000000000011111111111001110000000000000000", 
	"1000001100011001110000011100000010110000000000000000000", 
	"1000000000000000000000011100000000000000000000000000000",
	"0000000000010000000000000011100010000000011000110000000", 
	"0000000000000000000000000100000000000000000000001111111" };
int AutoPos = 0;
int ScanObs = 0;
int HalfCyc = 0;
int OutIono = 0;
int OutTime = 0;
int OutLeaps = 0;
int SepNav = 0;
float TimeTol = 0.005;
int sep_nav = RnxVer < 3 || SepNav;

bool TimeStartF = 0;
bool TimeEndF = 0;
bool TimeIntF = 0;
string TimeY1 = "2000/01/01";
string TimeH1 = "00:00:00";
string TimeY2 = "2000/01/01";
string TimeH2 = "00:00:00";
string TimeInt = "1";
bool TimeUnitF = 0;
string TimeUnit = "24";
string InFile = "";
string OutDir = "C:\\distr\\data\\";
string OutFile1 = "";
string OutFile2 = "";
string OutFile3 = "";
string OutFile4= "";
string OutFile5 = "";
string OutFile6 = "";
string OutFile7 = "";
string OutFile8 = "";
string OutFile9 = "";
bool OutDirEna = 1;
bool OutFileEna1 = 1;
bool OutFileEna2 = 1;
bool OutFileEna3 = 1;
bool OutFileEna4 = 1;
bool OutFileEna5 = 1;
bool OutFileEna6 = 1;
bool OutFileEna7 = 1;
bool OutFileEna8 = 1;
bool OutFileEna9 = 1;
int FormatConv = 0;
int EventEna = 1;
const char* FileName;
int rnx = strstr("RTCM3", "RINEX") != NULL;
int navsys = 0, obstype = 0, freqtype = 0;
bool Nav1 = 1;
bool Nav2 = 1;
bool Nav3 = 1;
bool Nav4 = 1;
bool Nav5 = 1;
bool Nav6 = 1;
bool Nav7 = 1;

bool Obs1 = 1;
bool Obs2 = 1;
bool Obs3 = 1;
bool Obs4 = 1;

bool Freq1 = 1;
bool Freq2 = 1;
bool Freq3 = 0;
bool Freq4 = 0;
bool Freq5 = 0;
bool Freq6 = 0;
bool Freq7 = 0;

//int TraceLevel = 0;
gtime_t Time;
char pathString[1024] = "C:\\distr\\data\\0001_";
char fileString[1024] = "0001_";
//string InFile;