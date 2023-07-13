#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <cmath>
#include <cstdlib>

using namespace std;

bool quina(int i, int j, int a, int b) {
    if (sqrt(pow(i-a,2.0) + pow(j-b,2.0)) < 2 || sqrt(pow(i-a+4,2.0) + pow(j-b,2.0)) < 2 || sqrt(pow(i-a-4,2.0) + pow(j-b,2.0)) < 2 || sqrt(pow(i-a,2.0) + pow(j-b+4,2.0)) < 2 || sqrt(pow(i-a,2.0) + pow(j-b-4,2.0)) < 2) {
        return false;
    }
    else if (sqrt(pow(i-a,2.0) + pow(j-b,2.0)) < 8) {
        return true;
    }
    else {
        return false;
    }
}

bool castelo_amarelo(int i, int j, int a, int b) {
    if (i > a-3 && -abs(j-b) > i-a) {
        return false;
    }
    if (i > a-3 && i < a+3 && j > b-4 && j < b+4) {
        return true;
    }
    else {
        return false;
    }
}



int main() {
        string cod = "P3";
        int largura = 400;
        int comprimento = 400;

        int WhiteValue = 255;

        vector < vector< vector<int> > > imagem(3, vector< vector<int> >(largura, vector<int>(comprimento)));
        for (int i = 0; i < largura; i++) {
            for (int j = 0; j < comprimento; j++) {
                if (j < 160) {
                imagem[0][i][j] = 0;
                imagem[1][i][j] = 130;
                imagem[2][i][j] = 0;
                }
                else {
                imagem[0][i][j] = 255;
                imagem[1][i][j] = 0;
                imagem[2][i][j] = 0;
                }
                if (sqrt((pow(i-200,2.0) + pow(j-160,2.0))) < 50 && sqrt((pow(i-200,2.0) + pow(j-160,2.0))) > 35) {
                imagem[0][i][j] = 255;
                imagem[1][i][j] = 255;
                imagem[2][i][j] = 0;
                }
                if (i>180 && i < 210 && j > 125 && j < 195) {
                imagem[0][i][j] = 255;
                imagem[1][i][j] = 255;
                imagem[2][i][j] = 255;
                }
                if (sqrt((pow(i-200,2.0) + pow(j-160,2.0))) < 30 && i >200){
                imagem[0][i][j] = 255;
                imagem[1][i][j] = 255;
                imagem[2][i][j] = 255;
                }
                if (sqrt((pow(i-200,2.0) + pow(j-160,2.0))) > 30 && sqrt(pow(i-200,2.0) + pow(j-160,2.0)) < 38 && i >213) {
                imagem[0][i][j] = 255;
                imagem[1][i][j] = 0;
                imagem[2][i][j] = 0;
                }
                if (175 < i  && i < 185 && 125 < j && j < 195) {
                imagem[0][i][j] = 255;
                imagem[1][i][j] = 0;
                imagem[2][i][j] = 0;
                }
                if (j > 125 && j < 135 && i > 175 && i < 215){
                imagem[0][i][j] = 255;
                imagem[1][i][j] = 0;
                imagem[2][i][j] = 0;
                }
                if (j > 185 && j < 195 && i > 175 && i < 215){
                imagem[0][i][j] = 255;
                imagem[1][i][j] = 0;
                imagem[2][i][j] = 0;
                }
                if (quina(i,j,192,160)) {
                imagem[0][i][j] = 0;
                imagem[1][i][j] = 0;
                imagem[2][i][j] = 255;
                }
                if (quina(i,j,208,160)) {
                imagem[0][i][j] = 0;
                imagem[1][i][j] = 0;
                imagem[2][i][j] = 255;
                }
                if (quina(i,j,224,160)) {
                imagem[0][i][j] = 0;
                imagem[1][i][j] = 0;
                imagem[2][i][j] = 255;
                }
                if (quina(i,j,208,144)) {
                imagem[0][i][j] = 0;
                imagem[1][i][j] = 0;
                imagem[2][i][j] = 255;
                }
                if (quina(i,j,208,176)) {
                imagem[0][i][j] = 0;
                imagem[1][i][j] = 0;
                imagem[2][i][j] = 255;
                }
                if (castelo_amarelo(i,j,180,160)) {
                imagem[0][i][j] = 255;
                imagem[1][i][j] = 255;
                imagem[2][i][j] = 0;
                }
                if (castelo_amarelo(i,j,205,130)) {
                imagem[0][i][j] = 255;
                imagem[1][i][j] = 255;
                imagem[2][i][j] = 0;
                }
                if (castelo_amarelo(i,j,205,190)) {
                imagem[0][i][j] = 255;
                imagem[1][i][j] = 255;
                imagem[2][i][j] = 0;
                }
                if (castelo_amarelo(i,j,180,130)) {
                imagem[0][i][j] = 255;
                imagem[1][i][j] = 255;
                imagem[2][i][j] = 0;
                }
                if (castelo_amarelo(i,j,180,190)) {
                imagem[0][i][j] = 255;
                imagem[1][i][j] = 255;
                imagem[2][i][j] = 0;
                }
                if (castelo_amarelo(i,j,230,145)) {
                imagem[0][i][j] = 255;
                imagem[1][i][j] = 255;
                imagem[2][i][j] = 0;
                }
                if (castelo_amarelo(i,j,230,175)) {
                imagem[0][i][j] = 255;
                imagem[1][i][j] = 255;
                imagem[2][i][j] = 0;
                }
                if (abs(j-160) < 3 && abs(i-170)<5){
                imagem[0][i][j] = 255;
                imagem[1][i][j] = 255;
                imagem[2][i][j] = 0;
                }
            }
        }

        ofstream file;
        file.open("bandeira_portugal.ppm");
        file << cod << endl;
        file << largura << " " << comprimento << endl;
        file << WhiteValue << endl;
        for (int i = 0; i < largura; i++) {
            for (int j = 0; j < comprimento; j++) {
                file << imagem[0][i][j] << " ";
                file << imagem[1][i][j] << " ";
                file << imagem[2][i][j] << " ";
            }
            file << endl;
        }

        file.close();
        return 0;
    }

