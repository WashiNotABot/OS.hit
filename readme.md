<!-- COMMAND LISTS -->
**docker build -t kimmy .**<br />
_build docker file name kimmy in current path_<br />

docker run -h kimhan --name kimhan -it kimmy bash
_create new container name kimhan from build named kimmy assign host name is kimhan_


gcc csine.c -o hello -lm
_compile csine to hello.out. which include libary math_

alias csine='/project/hello'


csine
python3 np2pd.py
wget https://files.grouplens.org/datasets/movielens/ml-latest-small.zip
unzip ml-latest-small.zip
cd ml-latest-small

cat ratings.csv | cut -d ',' -f3 | grep -c '5.0'
cat ratings.csv | cut -d ',' -f3 | grep -c '4.0'
cat ratings.csv | cut -d ',' -f3 | grep -c '1.0'
cat ratings.csv | cut -d ',' -f3 | grep -c '0.5'

cat ratings.csv | awk -F ',' '$3 == "0.5"'
cat ratings.csv | awk -F ',' '$3 == "0.5"' | sort -t ',' -k 2n > kuy.txt

head kuy.txt -n 15
tail kuy.txt -n 15

cd ..
gcc afork.c && ./a.out && rm a.out
gcc bfork.c && ./a.out && rm a.out
