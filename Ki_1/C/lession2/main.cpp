#include <stdio.h>

//
//int main(){
//	int side1 = 0, side2 = 0, side3 = 0;
//	printf("Enter value of 3 side triangle: ");
//	scanf("%d %d %d", &side1, &side2, &side3);
//
//	int sum3side = side1 + side2 + side3;
//
//	if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
//    printf("This is triangle");
//  } else printf("This is NOT triangle");
//
//	/* Cách viết gọn của If else */
//  (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) ? printf("This is triangle") : printf("This is NOT triangle");
//
//}

int main() {
	int poitOfEnglish = 0;
	int poitOfJapanese = 0;
	int poitOfFrance = 0;

	scanf("%d %d %d", &poitOfEnglish, &poitOfJapanese, &poitOfFrance);

	//float averagePoint = (float)(poitOfEnglish + poitOfFrance + poitOfJapanese) / 3;
	float averagePoint = (poitOfEnglish + poitOfFrance + poitOfJapanese)*1.0 / 3;
	char degree = 'a';
	if (averagePoint < 50) {
//		printf("Kem : %f", averagePoint);
		degree = 'D';
	} else if (averagePoint > 50 && averagePoint < 60) {
//		printf("Trung Binh : %f", averagePoint);
		degree = 'C';
	} else if(averagePoint > 60 && averagePoint < 80) {
//		printf("Kha : %f", averagePoint);
		degree = 'B';
	} else {
//		printf("Gioi : %f", averagePoint);
		degree = 'A';
	}
	switch(degree || && == != a != b ) {
		case 'A': {
			printf("Gioi : %f", averagePoint);
			break;
		}
		case 'C': {
		printf("CCCC : %f", averagePoint);
		}

	}

	int number = 0;
	printf("Value : %d", ++number);
  printf("\nValue : %d", number--);
  printf("\nValue : %d", --number);


  /* Tong ket */
  + Học if else => 2 điều kiện khi dùng if else
		- Dùng khi tác động lên 1 biến
		- Kiểm tra biến đấy vs các điều kiện
	+ switch case => dùng thay vì if else quá nhiều ( ví dụ trong tính ngày trong tháng )
	// http://vforum.vn/diendan/showthread.php?87483-Bai-tap-C-Viet-chuong-trinh-nhap-ngay-thang-nam-Kiem-tra-xem-ngay-thang-nam-co-hop-le-khong-
	+ Toán tử: &&, ||, ==, !=, ++, --

//	*Bài tập về nhà*
//	B1: Đọc lại các ví dụ trên => Tự nghĩ bài tập áp dụng toán tử 3 phân
//	B2: Viết lại bài tính số ngày của 1 tháng dùng switch case và if else => 21h - ngày 23 tháng 12 2018
//	B3: CHÚ Ý CHECK lại coding convention của từng bài, nếu lần sau nộp bài hoặc hỏi bài mà chưa check
//	coding convention => Tích 1 dấu => Phạt 2k/1 dấu => Tích tiền, cuối tháng ae ăn nhậu
//	B4: Tìm hiểu vòng lặp (for, while, do while)
//	=> Viết ra 1 bản text, doc tóm tắt lại các ý chính của vòng lặp (vì sao dùng vòng lặp, dùng trong
//	trường hợp nào, cho VD của từng loại vòng lặp...... ) * Deadline : T3 25/12/2018
//
//}
