# $(subst from,to,text)  

Hàm `subst` dùng để tìm trong chuỗi **text** có chuỗi **from** không, nếu có thì thay thế chuỗi **from** thành chuỗi **to**.  
Ví dụ: `$(subst ee,EE,feet on the street)` thì kết quả trả về là `fEEt on the strEEt`.
