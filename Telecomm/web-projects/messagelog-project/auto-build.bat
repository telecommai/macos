call npm run build
copy /y dist\js\app.js ..\..\Resources\html\messagelogScript
copy /y dist\js\chunk-vendors.js ..\..\Resources\html\messagelogScript

cd ..\..\
makeRcc.bat

