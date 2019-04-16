call npm run build
copy /y dist\js\app.js ..\..\Resources\html\chatScript
copy /y dist\js\chunk-vendors.js ..\..\Resources\html\chatScript

cd ..\..\
makeRcc.bat
