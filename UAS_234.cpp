#include <iostream>
using namespace std;

class MasukUniversitas
{
private:
    int uangPendaftaran;
    // isi daftar variable yang dibutuhkan di bawah ini
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;

public:
    MasukUniversitas()
    {
        uangPendaftaran = 0;
        // isi nilai default variable yang dibutuhkan di bawah ini
        uangSemesterPertama = 0;
        uangBangunan = 0;
        totalBiaya = 0;
    }

    virtual void namaJalurMasuk() { return; }
    // isi disini dengan fungsi virtual yang dibutuhkan

    virtual void hitungTotalBiaya() { return; }

    virtual void tampilkanTotalBiaya() { return; }

    virtual void input() { return; }

    void setUangPendaftaran(int nilai)
    {
        this->uangPendaftaran = nilai;
    }
    float getUangPendaftaran()
    {
        return uangPendaftaran;
    }
    // isi setter dan getter variable yang dibutuhkan di bawah ini

    void setUangSemesterPertama(int nilai)
    {
        this->uangSemesterPertama = nilai;
    }
    float getUangSemesterPertama()
    {
        return uangSemesterPertama;
    }
    void setUangBangunan(int nilai)
    {
        this->uangBangunan = nilai;
    }
    float getUangBangunan()
    {
        return uangBangunan;
    }
};

class SNBT : public MasukUniversitas
{
public:
    int nilaiP, nilaiSP, nilaiB;
    int totalSNBT;

    void namaJalurMasuk()
    {
        cout << "Jalur Masuk: SNBT" << endl;
    }

    void input()
    {
        cout << "Masukkan uang pendaftaran: " << endl;
        cin >> nilaiP;
        cout << "Masukkan uang semester pertama: " << endl;
        cin >> nilaiSP;
        cout << "Masukkan uang bangunan: " << endl;
        cin >> nilaiB;
    }

    void hitungTotalBiaya()
    {
        totalSNBT = nilaiP + nilaiSP + nilaiB;
    }

    void tampilkanTotalBiaya()
    {
        cout << "Total Biaya: " << this->totalSNBT << endl;
        if (totalSNBT > 15000000)
        {
            cout << "Kategori: Mahal" << endl;
            cout << "Rekomendasi: Tidak Direkomendasikan." << endl;
        }
        else if (totalSNBT > 5000000)
        {
            cout << "Kategori: Sedang" << endl;
            cout << "Rekomendasi: Dipertimbangkan" << endl;
        }
        else
        {
            cout << "Kategori: Murah" << endl;
            cout << "Rekomendasi: Direkomendasikan." << endl;
        }
    }
    // isi disini untuk melengkapi class SNBT
};

class SNBP : public MasukUniversitas
{
public:
    int nilaiP, nilaiSP;
    int totalSNBP;

    void namaJalurMasuk()
    {
        cout << "Jalur Masuk: SNBP" << endl;
    }

    void input()
    {
        cout << "Masukkan uang pendaftaran: " << endl;
        cin >> nilaiP;
        cout << "Masukkan uang semester pertama: " << endl;
        cin >> nilaiSP;
    }

    void hitungTotalBiaya()
    {
        totalSNBP = nilaiP + nilaiSP;
    }

    void tampilkanTotalBiaya()
    {
        cout << "Total Biaya: " << this->totalSNBP << endl;
        if (totalSNBP > 15000000)
        {
            cout << "Kategori: Mahal" << endl;
            cout << "Rekomendasi: Tidak Direkomendasikan." << endl;
        }
        else if (totalSNBP > 5000000)
        {
            cout << "Kategori: Sedang" << endl;
            cout << "Rekomendasi: Dipertimbangkan." << endl;
        }
        else
        {
            cout << "Kategori: Murah" << endl;
            cout << "Rekomendasi: Direkomendasikan." << endl;
        }
    }
    // isi disini untuk melengkapi class SNBP
};

int main()
{
    int pilihan;

    MasukUniversitas *u;
    SNBT st;
    SNBP sp;

    do
    {
        cout << "Pilih Jalur Masuk: " << endl;
        cout << "1. SNBT" << endl;
        cout << "2. SNBP" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            u = &st;
            u->namaJalurMasuk();
            u->input();
            u->hitungTotalBiaya();
            u->tampilkanTotalBiaya();
            break;
        case 2:
            u = &sp;
            u->namaJalurMasuk();
            u->input();
            u->hitungTotalBiaya();
            u->tampilkanTotalBiaya();
            break;
        case 3:
            break;

        default:
            cout << "Pilihan tidak ada." << endl;
            break;
        }
    } while (pilihan != 3);

    return 0;
    // isi disini untuk fungsi main
}