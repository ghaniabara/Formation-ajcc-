PRAGMA foreign_keys=OFF;
BEGIN TRANSACTION;
CREATE TABLE PERSONNE

(idPers int(2) not null,

nom char(20),

prenom char(20),
primary key (idpers));
INSERT INTO PERSONNE VALUES(1,'Kidman','Nicole');
INSERT INTO PERSONNE VALUES(2,'Bettany','Paul');
INSERT INTO PERSONNE VALUES(3,'Watson','Emily');
INSERT INTO PERSONNE VALUES(4,'Skarsgard','Stellan');
INSERT INTO PERSONNE VALUES(5,'Travolta','John');
INSERT INTO PERSONNE VALUES(6,'L.Jackson','Samuel');
INSERT INTO PERSONNE VALUES(7,'Willis','Bruce');
INSERT INTO PERSONNE VALUES(8,'Irons','Jeremy');
INSERT INTO PERSONNE VALUES(9,'Spader','James');
INSERT INTO PERSONNE VALUES(10,'Hunter','Holly');
INSERT INTO PERSONNE VALUES(11,'Arquette','Rosanna');
INSERT INTO PERSONNE VALUES(12,'Wayne','John');
INSERT INTO PERSONNE VALUES(13,'Von Trier','Lars');
INSERT INTO PERSONNE VALUES(14,'Tarantino','Quentin');
INSERT INTO PERSONNE VALUES(15,'Cronenberg','David');
INSERT INTO PERSONNE VALUES(16,'Mazursky','Paul');
INSERT INTO PERSONNE VALUES(17,'Jones','Grace');
INSERT INTO PERSONNE VALUES(18,'Glen','John');
INSERT INTO PERSONNE VALUES(19,'Eastwood','Clint');
INSERT INTO PERSONNE VALUES(20,'Spacey','Kevin');
INSERT INTO PERSONNE VALUES(21,'Mendes','Sam');
INSERT INTO PERSONNE VALUES(22,'Jolie','Angelina');
INSERT INTO PERSONNE VALUES(50,'zem','Roschdy');
CREATE TABLE FILM

(idfilm int(2) not null,

idRealisateur int(2) references PERSONNE(idpers)on delete restrict on update restrict,

titre char(60),

genre char(20),

annee int(4),
primary key (idfilm));
INSERT INTO FILM VALUES(1,15,'Crash','Drame',1996);
INSERT INTO FILM VALUES(2,15,'Faux-semblants','Epouvante',1988);
INSERT INTO FILM VALUES(3,14,'Pulp Fiction','Policier',1994);
INSERT INTO FILM VALUES(4,13,'Breaking the waves','Drame',1996);
INSERT INTO FILM VALUES(5,13,'Dogville','Drame',2002);
INSERT INTO FILM VALUES(6,12,'Alamo','Western',1960);
INSERT INTO FILM VALUES(7,18,'Dangereusement vôtre','Espionnage',1985);
INSERT INTO FILM VALUES(8,19,'Chasseur blanc, coeur noir','Drame',1989);
INSERT INTO FILM VALUES(10,21,'American Beauty','Drame',1999);
COMMIT;
