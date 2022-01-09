#include <iostream>

using namespace std;


int getOption();

string checkLulus(int nem){
    if(nem < 13){
        return "Tidak Lulus";
    }else {
        return "Lulus";
    }
}

int main(){

	int pilihan = getOption();
	char is_continue;

	enum option{CREATE = 1, READ, MEAN, RECOMEND, FINISH};

    int jml ,total = 0 ;
    float rata,nem;
    cout << "Masukkan Jumlah Siswa : ";
    cin >> jml;
    
    total = jml;
    
    string nama[total];
    int IPA[total],IPS[total],MATEMATIKA[total],BAHASA[total];

	while(pilihan != FINISH){
		
		switch(pilihan){
			case CREATE:
				cout << "Menambah data siswa UN\n";
                for(int i = 0; i < total; i++){
                    cout << "Masukkan Nama : " ;
                    cin >> nama[i];
                    cout << "Masukkan Nilai IPA : ";
                    cin >> IPA[i];
                    cout << "Masukkan Nilai IPS : ";
                    cin >> IPS[i];
                    cout << "Masukkan Nilai MATEMATIKA : ";
                    cin >> MATEMATIKA[i];
                    cout << "Masukkan Nilai BAHASA : ";
                    cin >> BAHASA[i];
                }
				break;
			case READ:
				cout << "Tampilkan data siswa UN\n";
                for(int i = 0; i < total; i++){
                    cout << "Nama\t" << "IPA\t" <<"IPS\t"<<"MATEMATIKA\t"<<"BAHASA\n";
                    cout << nama[i]<<"\t"<< IPA[i]<<"\t"<<IPS[i]<<"\t"<<MATEMATIKA[i]<<"\t\t"<<BAHASA[i]<<"\n";
                }
				break;
			case MEAN:
				cout << "Tampilkan Rata-rata dan NEM UN\nNEM terbesar = 25 \n";
                for (int i = 0; i < total; i++){
                    rata = (IPA[i]+IPS[i]+MATEMATIKA[i]+BAHASA[i]) / 4 ;
                    nem = rata / 4;
                    cout << "Nama \tRata-rata \tNEM \tKeterangan \n";
                    cout << nama[i] << "\t" << rata << "\t\t"<<nem <<"\t"<< checkLulus(nem)<<"\n";
                }
				break;
			case RECOMEND:
            int pil1;
				cout << "1.Tampilkan rekomendasi Sekolah Negeri sesuai NEM\n";
				cout << "2.Tampilkan rekomendasi Sekolah Negeri sesuai jurusan\n";
                cout << "pilih [1-2] ? : ";
                cin >> pil1;
                switch (pil1){
                    case 1:
                        if(nem > 21){
                            for(int i=0;i<total;i++){
                                cout <<"NEM "<< nem<< "\n";
                                cout << "Nama \t"<<"Rekomendasi Sekolah \n";
                                cout << nama[i]<<"\t"<<"Sekolah Negeri 1\n\tSekolah Negeri 2\n\tSekolah Negeri 4 \n";
                            }
                        }else if(nem < 21 && nem > 15){
                            for(int i=0;i<total;i++){
                                cout << "NEM "<<nem<< "\n";
                                cout << "Nama \t"<<"Rekomendasi Sekolah \n";
                                cout << nama[i]<<"\t"<<"Sekolah Negeri 3\n\tSekolah Negeri 5\n\tSekolah Negeri 8 \n";
                            }
                        }else{
                            for(int i=0;i<total;i++){
                                cout << "NEM "<<nem<< "\n";
                                cout << "Nama \t"<<"Rekomendasi Sekolah \n";
                                cout << nama[i]<<"\t"<<"Sekolah Negeri 6\n\tSekolah Negeri 9\n\tSekolah Negeri 7 \n";
                            }
                        }
                        break ;
                    case 2:
                        for(int i=0;i<total;i++){
                            if(IPA[i]>85){
                                for(int i=0;i<total;i++){
                                    cout << "IPA "<<IPA[i]<< "\n";
                                    cout << "Nama \t"<<"Rekomendasi Sekolah IPA\n";
                                    cout << nama[i]<<"\t"<<"Sekolah Negeri 1\n\tSekolah Negeri 5 \n\n";
                                }
                            }else if (IPA[i] < 85 ){
                                for(int i=0;i<total;i++){
                                    cout << "IPA "<<IPA[i]<< "\n";
                                    cout << "Nama \t"<<"Rekomendasi Sekolah IPA\n";
                                    cout << nama[i]<<"\t"<<"Sekolah Negeri 3\n\n";
                                }
                            }if(IPS[i]>85){
                                for(int i=0;i<total;i++){
                                    cout << "IPS "<<IPS[i] << "\n";
                                    cout << "Nama \t"<<"Rekomendasi Sekolah IPS\n";
                                    cout << nama[i]<<"\t"<<"Sekolah Negeri 2\n\tSekolah Negeri 4 \n\tSekolah Negeri 1\n\n";
                                }
                            }else if(IPS[i]<85){
                               for(int i=0;i<total;i++){
                                    cout << "IPS "<<IPS[i]<< "\n";
                                    cout << "Nama \t"<<"Rekomendasi Sekolah IPS\n";
                                    cout << nama[i]<<"\t"<<"Sekolah Negeri 2\n\tSekolah Negeri 6\n\n";
                                } 
                            }if(MATEMATIKA[i]>85){
                                for(int i=0;i<total;i++){
                                    cout << "MATEMATIKA "<<MATEMATIKA[i]<< "\n";
                                    cout << "Nama \t"<<"Rekomendasi Sekolah Matematika\n";
                                    cout << nama[i]<<"\t"<<"Sekolah Negeri 5\n\tSekolah Negeri 4 \n\tSekolah Negeri 7\n\n";
                                }
                            }else if(MATEMATIKA[i]<85){
                               for(int i=0;i<total;i++){
                                    cout << "MATEMATIKA "<<MATEMATIKA[i]<< "\n";
                                    cout << "Nama \t"<<"Rekomendasi Sekolah Matematika\n";
                                    cout << nama[i]<<"\t"<<"Sekolah Negeri 4\n\tSekolah Negeri 5\n\n";
                                } 
                            }if(BAHASA[i]>85){
                                for(int i=0;i<total;i++){
                                    cout << "BAHASA "<<BAHASA[i]<< "\n";
                                    cout << "Nama \t"<<"Rekomendasi Sekolah Bahasa\n";
                                    cout << nama[i]<<"\t"<<"Sekolah Negeri 3\n\tSekolah Negeri 7 \n\tSekolah Negeri 8\n\n";
                                }
                            }else if(BAHASA[i]<85){
                               for(int i=0;i<total;i++){
                                    cout << "BAHASA "<<BAHASA[i]<< "\n";
                                    cout << "Nama \t"<<"Rekomendasi Sekolah Bahasa\n";
                                    cout << nama[i]<<"\t"<<"Sekolah Negeri 8\n\tSekolah Negeri 9\n\n";
                                } 
                            }
                        }
                }
                
				break;
			default:
				cout << "Pilihan tidak ditemukan\n";
				break;
		}

		label_continue:

		cout << "Lanjutkan?(y/n) : ";
		cin >> is_continue;
		if ( (is_continue == 'y') | (is_continue == 'Y')){
			pilihan = getOption();
		} else if ((is_continue == 'n') | (is_continue == 'N')){
			break;
		} else {
			goto label_continue;
		}

	}

	cout << "akhir dari program \n" ;
    system("EXIT");
	return 0;
}

int getOption(){
	int input;
	system("cls");
	pilih:cout << "\nProgram Hasil Ujian Nasionall Siswa \n" ;
	cout << "=============================== \n" ;
	cout << "1. Tambah data siswa UN \n" ;
	cout << "2. Tampilkan data siswa UN \n" ;
	cout << "3. Tampilkan rata-rata siswa UN \n" ;
	cout << "4. Tampilkan rekomendasi sekolah \n" ;
	cout << "5. Selesai \n" ;
	cout << "=============================== \n" ;
	cout << "pilih [1-5]? : ";
	cin >> input;

	return input;
}