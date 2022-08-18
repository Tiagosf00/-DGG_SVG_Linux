CXX = g++
CXXFLAGS = -std=c++2a -Wall -pthread # -fsanitize=thread

OBJECTS_PRECOMPUTE = \
	dgg_precompute/main.o \
	ich/Point3D.o \
	ich/BaseModel.o \
	ich/RichModel.o \
	ich/ExactMethodForDGP.o \
	ich/PreviousCH.o \
	ich/ImprovedCHWithEdgeValve.o \
	dgg_precompute/SVG.o \
	dgg_precompute/FastDGG.o \
	dgg_precompute/dgg_precompute.o \

$(OBJECTS_PRECOMPUTE): \
	headers.h \
	ich/Point3D.h \
	ich/BaseModel.h \
	ich/RichModel.h \
	ich/ExactMethodForDGP.h \
	ich/PreviousCH.h \
	ich/ImprovedCHWithEdgeValve.h \
	dgg_precompute/SVG.h \
	dgg_precompute/FastDGG.h \
	dgg_precompute/dgg_precompute.h \
	dgg_buffer.h \
	dgg_definition.h \

DGG_Precompute: $(OBJECTS_PRECOMPUTE)
		$(CXX) $(CXXFLAGS) -o $@ $^


OBJECTS_SOLUTION = \
	dgg_solution/dgg_solution.o \
	ich/Point3D.o \
	ich/BaseModel.o \
	ich/RichModel.o \

$(OBJECTS_SOLUTION): \
	headers.h \
	ich/Point3D.h \
	ich/BaseModel.h \
	ich/RichModel.h \
	dgg_buffer.h \
	dgg_definition.h \
	dgg_dijkstra.h \

DGG_Solution: $(OBJECTS_SOLUTION)
		$(CXX) $(CXXFLAGS) -o $@ $^


clean:
	rm -f \
	*.o \
	ich/*.o \
	dgg_solution/*.o \
	dgg_precompute/*.o \
	DGG_Precompute \
	DGG_Solution \