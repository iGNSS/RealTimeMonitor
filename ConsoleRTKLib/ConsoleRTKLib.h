#pragma once
#include <string>
#include "src/rtklib.h"

using namespace std;



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
void __fastcall SvrStartStream(void);

//������� ��������� ������� ���������� ������ � ����
void __fastcall SvrStop(void);

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