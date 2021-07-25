//get datasets
for json {
    const int32_t *data.pr;
    const int64_t *data.prSet;
}
API int void()
//download the dependincies
@interface.get
getLib.term("mPALF Library Main")
getLib.url("https://mpalf.supply/lib/main-all.zip")

__base_integer__(final)
//set thread length
@interface.max-type-allowed
maxTypeAllowed(">15")
while thread.nodeMaxType do threadLength == 60
while thread.nodeMinType do threadLength == 5

if maxThreadBits == 0 do threadLengthSet == 5, error.processing("Thread size is too small!")
if minThreadBits == >60 do threadLengthSet == 60, error.processing("Thread size is too big!")
//create user interface dependincy
@interface.get
intline.term("User Interface v0.1")
intline.term("Interface")

intline.query("interface.getTerm")_engine(none)
__base_integer__(final)

@interface.threadTypeAccessable
access.int32(argc, install.url("https://mpalf.supply/lib/main-all-Final0.4.4.c"))

interface.id(setid("0"))

__base_integer_(final)

int void()

for url.install do url == "none"
//create threading interface
@interface.thread
thread.createThread == true
thread.name("Thread 1")
thread.function("serverCalls")

thread.function("serverInstallationProcesser")
