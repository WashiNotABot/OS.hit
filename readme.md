<!-- COMMAND LISTS --> 
## ชื่อนักศึกษา และ link video
#### 65090500405    เจษฎา    ปราณี
#### 65090500431    คิมหันต์    จงใจดี
#### 65090500448    พิชญุตม์    สมบัติ
#### 65090500450    ภิรดา     เซ็มแม้นหมัด
#### 65090500456    สถาปนา    ตินพ

## ส่วน script และ dockerfile
### 1.1 ใช้ ubuntu รุ่นล่าสุด (FROM ubuntu:latest )
### 1.2 ส่งโค้ดภาษา C ชื่อ csine.c (COPY . /root)
### 1.3 ส่งโค้ดภาษา Python ชื่อ np2pd.py (COPY . /root)
### 1.4 Python, Editor, C Compiler, sudo โหลดมาพร้อม (บรรทัด run)


### ทำการ build image ชื่อ kimhan
```
docker build -t kimhan .
```

### สร้าง container ชื่อ kimhan_container จาก image ชื่อ kimhan ชื่อ host ชื่อ kimhan และเข้าไปใน terminal ของตัวเครื่อง
```
docker run -h kimhan --name kimhan_container -it kimhan bash
```

### 1.5 คอมไพล์ csine.c ข้างต้น ให้ได้โปรแกรมชื่อ hello แล้วสั่งให้ทํางานเพื่อทดสอบ โดยการเรียก csine โดยตรง
```
gcc csine.c -o hello -lm
alias csine='/root/hello'
csine
```
_#compile csine to hello.out. which include library math_<br />


### 1.6 ส่งโค้ดภาษา Python ชื่อ np2pd.py ดังต่อไปนี้ เข้าไปเพื่อทดสอบ
```
python3 np2pd.py
```
### 1.7 download file from https://files.grouplens.org/datasets/movielens/ml-latest-small.zip 
### 1.8 unzip file
```
wget https://files.grouplens.org/datasets/movielens/ml-latest-small.zip
unzip ml-latest-small.zip
cd ml-latest-small
```
### 1.9 หาจำนวนผู้ให้ ratings ที่ให้ 5.0 4.0 1.0 0.5 ตามลำดับ
```
cat ratings.csv | cut -d ',' -f3 | grep -c '5.0'
cat ratings.csv | cut -d ',' -f3 | grep -c '4.0'
cat ratings.csv | cut -d ',' -f3 | grep -c '1.0'
cat ratings.csv | cut -d ',' -f3 | grep -c '0.5'
```
### 1.10 คัดกรอง rating 0.5 และเรียงตาม movieID แล้วบันทึกลงไฟล์ชื่อ query.txt พร้อม โชว์ไฟล์ส่วนต้น และ ส่วนท้าย มา 15 บรรทัด
```
cat ratings.csv | awk -F ',' '$3 == "0.5"' | sort -t ',' -k 2n > query.txt

head query.txt -n 15
tail query.txt -n 15
```
### 2.0 ออกจาก ml-latest-small และ ทำการ compile file afork.c และ execute ทันที และลบ a.out ทิ้ง
```
cd ..
gcc afork.c && ./a.out && rm a.out
```
### 3.0 ทำการ compile file bfork.c และ execute ทันที และลบ a.out ทิ้ง
```
gcc bfork.c && ./a.out && rm a.out
```
