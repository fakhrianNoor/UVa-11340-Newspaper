// UVa-11340.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int n_testcase, n_article_line, n_paid_character, cost[100];
	double result;
	char paid_character[100];
	string article;
	ios_base::sync_with_stdio(false);

	cin >> n_testcase;
	while (n_testcase--) {
		result = 0.f;
		cin >> n_paid_character;
		for (int i = 0; i < n_paid_character; i++) {
			cin >> paid_character[i] >> cost[i];
		}
			
		cin >> n_article_line;
		cin.ignore();

		while(n_article_line--){
			getline(cin, article);
			for (int i = 0; i < article.length(); i++)
			{
				for (int j = 0; j < n_paid_character; j++)
				{
					if (article[i] == paid_character[j])
						result = result + cost[j];
				}
			}
			
		}
		cout << fixed << setprecision(2) << result / 100 << "$\n";

	}

}

