#include<stdio.h>
#include<stdint.h>


union ModCntReg
{
    uint32_t ModCntRegData;
    struct ModCntRegField{
        uint32_t clkSek0      :2;
        uint32_t clkSek1      :2;
        uint32_t clkSek2      :2;
        uint32_t clkSek3      :2;
        uint32_t reserved     :16;
        uint32_t node           :3;
        uint32_t dxcm           :1;
        uint32_t rbusy          :1;
        uint32_t rinit          :1;
        uint32_t ci             :1; 
        uint32_t ccce           :1;
    }ModCntRegFieldObj1;
};


int main(){
    union ModCntReg data1;
    scanf("Enetr the data %X", &data1.ModCntRegData );
    printf("Enetred data is %x \n", data1.ModCntRegData);
    
    
    printf(" data of clkSek0 = %X\n", data1.ModCntRegFieldObj1.clkSek0);
    printf(" data of clkSek1 = %X\n", data1.ModCntRegFieldObj1.clkSek1);
    printf(" data of clkSek2 = %X\n", data1.ModCntRegFieldObj1.clkSek2);
    printf(" data of clkSek3 = %X\n", data1.ModCntRegFieldObj1.clkSek2);
    
    printf(" data of reserved = %X\n", data1.ModCntRegFieldObj1.reserved);
    printf(" data of node = %X\n", data1.ModCntRegFieldObj1.node);
    printf(" data of dxcm = %X\n", data1.ModCntRegFieldObj1.dxcm);
    printf(" data of rbusy = %X\n", data1.ModCntRegFieldObj1.rbusy);
    
    printf(" data of rinit = %X\n", data1.ModCntRegFieldObj1.rinit);
    printf(" data of ci = %X\n", data1.ModCntRegFieldObj1.ci);
    printf(" data of ccce = %X\n", data1.ModCntRegFieldObj1.ccce);

    return 0;
}
