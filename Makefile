SRC_CXX= testPiece.cxx Piece.cxx Joueur.cxx
EXE= testPiece

OBJ=${SRC_CXX:.cxx=.o}

all: $(EXE)

$(EXE): $(OBJ)
	g++ $(OBJ) -o $(EXE)

%.o: %.cxx
	g++ -c $<

clean:
	@rm -f $(OBJ) $(EXE) *~

