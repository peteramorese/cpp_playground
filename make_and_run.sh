cd build
cmake ./..
make
if [ $? == 0 ]; then
    clear
    ./bin/test
else
    echo "Build Failed!"
fi
