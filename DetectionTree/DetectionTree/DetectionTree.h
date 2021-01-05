#include <string.h>
#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include "stdafx.h"

using namespace std;

#define ROW 4
#define COL 3 + 1

class DetectionTree
{
public:
	struct TreeNode
	{
		string attr;							/* ��ǰ�Ľ����Ե���ʲô���� */
		vector<TreeNode *>children;				/* �ӽڵ� */
		map<string, TreeNode*> Attr2children;	/* ������ÿ�����Զ�Ӧ���ӽڵ� */
	};

	struct attribute
	{
		int index;								/* ���Ե����� */
		int total_num;							/* ÿ�����ԵĿ�ѡ���� */
		vector<string> attr_name;				/* ���Ե�ÿ����ѡ���� */
	};

	TreeNode *root;
	vector<attribute> attr;
	TreeNode* ID3(vector<vector<string>> data, vector<attribute> attr);
	void convert_data_to_attr(vector<vector<string>> data, vector<attribute> &attr);
};