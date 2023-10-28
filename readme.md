<!-- COMMAND LISTS -->
docker build -t kimmy .<br />
_#build docker file name kimmy in current path_<br />

docker run -h kimhan --name kimhan -it kimmy bash<br />
_#create new container name kimhan from build named kimmy assign host name is kimhan_<br />


gcc csine.c -o hello -lm<br />
_#compile csine to hello.out. which include library math_<br />

alias csine='/root/hello'<br />
csine<br />

python3 np2pd.py<br />

wget https://files.grouplens.org/datasets/movielens/ml-latest-small.zip<br />
unzip ml-latest-small.zip<br />
cd ml-latest-small<br />

cat ratings.csv | cut -d ',' -f3 | grep -c '5.0'<br />
cat ratings.csv | cut -d ',' -f3 | grep -c '4.0'<br />
cat ratings.csv | cut -d ',' -f3 | grep -c '1.0'<br />
cat ratings.csv | cut -d ',' -f3 | grep -c '0.5'<br />

cat ratings.csv | awk -F ',' '$3 == "0.5"'<br />
cat ratings.csv | awk -F ',' '$3 == "0.5"' | sort -t ',' -k 2n > kuy.txt<br />

head kuy.txt -n 15<br />
tail kuy.txt -n 15<br />

cd ..<br />
gcc afork.c && ./a.out && rm a.out<br />
gcc bfork.c && ./a.out && rm a.out<br /><br />
