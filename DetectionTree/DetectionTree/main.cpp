#include"DetectionTree.h"

void generate_data(vector<vector<string>> &data)
{
	data[0] = { "tall", "rich", "handsome", "1" };
	data[1] = { "low", "rich", "handsome", "1" };
	data[2] = { "tall", "poor", "handsome", "0" };
	data[3] = { "low", "poor", "handsome", "0" };
}

int main()
{
	DetectionTree DTree;

	vector<vector<string>> data(ROW, vector<string>(COL, ""));
	generate_data(data);

	/* ����������� */
	DTree.convert_data_to_attr(data, DTree.attr);

	/* ����ID3�Ķ�׼����зָ� */
	DTree.root = DTree.ID3(data, DTree.attr);

	return 0;
}