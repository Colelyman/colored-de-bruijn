# specify where to find the Boost headers and library installation
# replace the values if there is a specific Boost installation that you would like to use
BOOST_LIB_DIR = $(BOOST_LIBRARYDIR)
BOOST_INC = $(BOOST_INCLUDEDIR)

# specify where to find sdsl-lite
SDSL = thirdparty/sdsl-lite
SDSL_LIB_DIR = $(SDSL)/bin/lib
SDSL_INC = $(SDSL)/bin/include

BLOOM_INC = thirdparty/bloom

# configure variables for correct compilation and linking
INC = -I$(BOOST_INC) -I$(SDSL_INC) -I$(BLOOM_INC)
LIB_DIRS = -L$(BOOST_LIB_DIR) -L$(SDSL_LIB_DIR)
LIBS = -lsdsl #-lboost_graph
PARAMS = -Wall -std=c++11 -g $(INC) $(LIB_DIRS) $(LIBS)

EXEC = cdbg
OBJS = driver.o cdbg.o bloom.o

all: $(SDSL_LIB_DIR)/libsdsl.a $(EXEC)

$(SDSL_LIB_DIR)/libsdsl.a:
	cd $(SDSL) && ./install.sh ./bin

$(EXEC): $(OBJS)
	$(CXX) $(PARAMS) main.cpp $(OBJS) -o $@

%.o: %.cpp %.h
	$(CXX) $(PARAMS) -c $<

clean: clean-objs clean-exec

clean-sdsl:
	rm -rf $(SDSL)/bin

clean-objs:
	rm $(OBJS)

clean-exec:
	rm $(EXEC)
