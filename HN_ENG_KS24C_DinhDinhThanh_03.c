#include<stdio.h>

int main(){
 int arr[100];
 int choice,so_nt,temp;
 int size=0;
 int i,j,num_add,num_delete,position,end,num_find,same_num;
 int arrange[100];
 int first_case_check=0;
 int arranged=0;
 int start=0;
 int mid=0;
 int find_check=0;
 int brr[100];
 while(choice!=11){
 	printf("\n MENU \n \n");
 	printf("1.Nhap so phan tu va gia tri cho mang.\n");
 	printf("2.In ra cac phan tu trong mang.\n");
 	printf("3.Dem so luong cac so nguyen to co trong mang.\n");
 	printf("4.Tim gia tri nho thu 2 trong mang.\n");
 	printf("5.Them mot phan tu vao mang o vi tri cu the.\n");
 	printf("6.Xoa phan tu tai vi tri cu the.\n");
 	printf("7.Sap xep mang theo thu tu giam dan (Insertion sort).\n");
 	printf("8.Tim kiem 1 phan tu bang Binary Search.\n");
 	printf("9.Xoa toan bo phan tu trung lap va in toan bo phan tu doc nhat.\n");
 	printf("10.Dao nguoc thu tu cac phan tu co trong mang.\n");
 	printf("11.Thoat.\n");
 	printf("Lua chon cua ban: ");
 	scanf("%d", &choice);
 	
 	switch (choice){
 	case 1:
 		printf("\nmoi nhap so luong phan tu: ");
 		scanf("%d", &size);
 		if (size<1 || size>100){
 			printf("so luong phan tu khong hop le.\n");
		}else{
		 	for(i=0;i<size;i++){
		 		printf("moi gan gia tri cho phan tu arr[%d]= ",i);
		 		scanf("%d", &arr[i]);
		 		first_case_check++;
			 }
		 }
 		break;
 	
	 case 2:
	 
	 	for(i=0;i<size;i++){
	 		printf("arr[%d] = %d \n",i,arr[i]);
		 }
	 	break;
	 
	 case 3:
	 	so_nt=0;
	 	for(i=0;i<size;i++){
		if(arr[i]==3 || arr[i]==2 ||arr[i]==5 ||arr[i]==7 || arr[i]!=1 && arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%4!=0 && arr[i]%5!=0 && arr[i]%6!=0 && arr[i]%7!=0 && arr[i]%8!=0 && arr[i]%9!=0  ){
		so_nt++;
		}
	 	}
	 	printf("co tong cong %d so nguyen to \n",so_nt);
	 	break;
	case 6:
		printf("moi nhap vi tri cua phan tu muon xoa arr[]: ");
		scanf("%d", &num_delete);
		if (num_delete<0 || num_delete>size){
			printf("vi tri khong hop le\n");
			break;
		}else{
			for(i=num_delete;i<size-1;i++){
				arr[i]=arr[i+1];
			}
		}
		size--;
	 break;
	 case 5:
	 	printf("moi nhap gia tri muon them: ");
	 	scanf("%d",&num_add);
	 	printf("moi nhap vi tri muon chen: ");
	 	scanf("%d",&position);
	    if(position>size || position<0){
	    	printf("vi tri khong hop le\n");
	    	break;
	    	}else{
	    		for(i=size;i>position;i--){
	    			arr[i]=arr[i-1];
				}
	    		
			}
			arr[position]=num_add;
			size++;
			break;
	 case 4:
	 	if(first_case_check==0){
	 		printf("chua nhap mang!\n");
	 		break;
		 }else{
		 	for(i=0;i<size;i++){
		 		arrange[i]=arr[i];
			 }
			 
			 for(i=1;i<size;i++){
			 	temp=arrange[i];
			 	j=i-1;
			 	while(j>=0 && temp<arrange[j]){
			 		arrange[j+1]=arrange[j];
			 		j--;
				 }
			 	arrange[j+1]=temp;
			 }
		 	printf("gia tri nho thu hai la: %d",arrange[1]);
		 }
		 break;
	case 7:
	 	if(first_case_check==0){
	 		printf("chua nhap mang!\n");
	 		break;
	 	}else{
	 	 for(i=1;i<size;i++){
			 	temp=arr[i];
			 	j=i-1;
			 	while(j>=0 && temp>arr[j]){
			 		arr[j+1]=arr[j];
			 		j--;
				 }
			 	arr[j+1]=temp;
			 }
			 arranged++;
		for(i=0;i<size;i++){
			printf("arr[%d] = %d \n",i,arr[i]);
		}
	 		
		 }
		 break;
	case 8:
		if(arranged==0){
			printf("moi sap xep mang truoc(7).\n");
			break;
		}else{
			find_check=0;
			printf("\n moi nhap gia tri muon kiem tra:");
			scanf("%d",&num_find);
			end=0;
			start=size;
			while(end<=start){
				mid=(start+end)/2;
				if(arr[mid]==num_find){
					printf("gia tri can tim nam o vi tri %d",mid);
					find_check++;
					break;
					find_check++;
					}else if(arr[mid]>num_find){
						end=mid+1;
					}else{
						start=mid-1;
					}
			}
			
		}
		if(find_check==0){
			printf("\n gia tri khong ton tai trong mang. \n");
		}
		break;
	case 10:
		if(first_case_check==0){
	 		printf("chua nhap mang!\n");
	 		break;
	 	}else{
	 		j=0;
		for(i=size-1;i>=0;i--){
			brr[j]=arr[i];
			j++;
		}
		for(i=0;i<size;i++){
			arr[i]=brr[i];
		}
		
		printf("mang sau khi dao nguoc: \n");
	 	for(i=0;i<size;i++){
	 		printf("arr[%d]=%d\n",i,arr[i]);
		 }
		 }
		
		
	 break;
	
 }
}
	

   return 0;
}

