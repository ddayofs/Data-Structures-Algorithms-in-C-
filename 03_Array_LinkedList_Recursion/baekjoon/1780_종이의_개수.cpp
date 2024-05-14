#include <iostream>

using namespace std;

int len;
int paper[2187][2187];
int cnt[3];


bool	check(int x, int y, int len)
{
	for(int i = x; i < x + len; i++)
	{
		for (int j = y; j < y + len; j++)
		{
			if (paper[i][j] != paper[x][y])
				return false;
		}
	}
	//if all same num;
	return true;
}

void	divide(int x, int y, int len)
{
	if (check(x, y, len))
	{
		cnt[paper[x][y] + 1]++;
		return;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			divide(x + len / 3 * i, y + len / 3 * j, len / 3);
		}
	}
}

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> len;
	cout << "len : " << len << endl;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
			cin  >> paper[i][j];
	}
	cout << "input complete " <<endl;
	divide(0, 0, len);
	// cout << "hohoho" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "cnt[" << i <<"]" << cnt[i] << endl;

	}
}

// #include <iostream>
// using namespace std;

// int N;
// int paper[2200][2200];
// int cnt[3]; //-1, 0, 1로 채워진 종이 갯수

// //해당 종이 내부에 같은 숫자로만 채워졌는지 확인하는 함수
// bool check(int x, int y, int n) {
//   for (int i = x; i < x + n; i++)
//   for (int j = y; j < y + n; j++)
//     if (paper[x][y] != paper[i][j])
//     return false;
//   return true;
// }
// void solve(int x, int y, int z)
// {
//   if (check(x, y, z)) {
//     cnt[paper[x][y] + 1] += 1;
//     return;
//   }
//   int n = z / 3;
//   for (int i = 0; i < 3; i++)
//   for (int j = 0; j < 3; j++)
//     solve(x + i * n, y + j * n, n);
// }
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   cin >> N;
//   for (int i = 0; i < N; i++)
//   for (int j = 0; j < N; j++)
//     cin >> paper[i][j];
//   solve(0, 0, N);
//   for (int i = 0; i < 3; i++) cout << cnt[i] << "\n";
// }