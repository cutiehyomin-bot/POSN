#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Song {
    int id;
    int score;
};

bool compareSongs(const Song& a, const Song& b) {
    if (a.score != b.score) {
        return a.score > b.score;
    }
    return a.id < b.id;
}

int main() {
    int N;
    if (!(cin >> N)) return 0;

    vector<Song> songs(N);
    for (int i = 0; i < N; i++) {
        cin >> songs[i].id >> songs[i].score;
    }

    int R, X;
    cin >> R >> X;

    sort(songs.begin(), songs.end(), compareSongs);

    cout << songs[R - 1].id << endl;

    int rankX = -1;
    for (int i = 0; i < N; i++) {
        if (songs[i].id == X) {
            rankX = i + 1;
            break;
        }
    }

    if (rankX != -1) {
        cout << rankX << endl;
    } else {
        cout << "NOT IN LIST" << endl;
    }

    return 0;
}
