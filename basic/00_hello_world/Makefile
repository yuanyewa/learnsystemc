TARGET = sc_main

IDIR = .
SDIR = .
ODIR = .

SRC = $(wildcard $(SDIR)/*.cpp)
OBJ = $(SRC:$(SDIR)/%.c=$(ODIR)/%.o)

CXX = g++
CXXFLAGS = -I$(IDIR)
CXXFLAGS += -Iinclude
CFLAGS += -Wall
SCPATH = /usr/local/systemc-2.3.3
LIBS = -lm

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -I$(SCPATH)/include -L. -L$(SCPATH)/lib-macosx64 -Wl,-rpath $(SCPATH)/lib-macosx64 $^ $(LIBS) -o $@ -lsystemc

$(ODIR)/%.o: $(SDIR)/%.c
	$(CXX) $(CXXFLAGS) $(CFLAGS) -c $< -o $@
