#include <iostream>
#include <algorithm>
using namespace std;
int n, c, ans;
int arr[200001];
void binarary_tree() {
    int s = 1, e = arr[n - 1] - arr[0]; //������ ��ġ �ּҰŸ�, �ִ�Ÿ�
    while (s <= e) {
        int mid = (s + e) / 2; //������ �Ÿ� ���� 
        int count = 1; //������ ��ġ ����
        int start = arr[0];
        for (int i = 1; i < n; i++) {
            int diff = arr[i] - start;
            if (mid <= diff) {
                count++;
                start = arr[i];
            }
        }
        if (count >= c) { //�����Ⱑ �ʹ� ���ų� ���ǿ� �����ϴ� ������ �ø���.
            ans = mid;
            s = mid + 1;
        }
        else { // �����Ⱑ �� ��ġ�Ǿ���ϹǷ� ������ ������.
            e = mid - 1;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> c;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    binarary_tree();
    cout << ans;
}