/*
 * Author:
 * Date: 25.10.2023
 * Name:Muxtorov Dilshod
 */

bool is_leap(int year){
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                return true;
            }else{
                return false;
            }
        }else{
            return true;
        }
    }else{
        return false;
    }
}
