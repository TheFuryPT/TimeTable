BEGIN;

CREATE TABLE class (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    number INTEGER
);

CREATE TABLE student (
    id INTEGER PRIMARY KEY AUTOINCREMENT, 
    name TEXT, 
    id_class INTEGER,
    FOREIGN KEY (id_class) REFERENCES class(id)
);

CREATE TABLE module (
    id INTEGER PRIMARY KEY AUTOINCREMENT, 
    name TEXT
);

CREATE TABLE room (
    id INTEGER PRIMARY KEY AUTOINCREMENT, 
    number INTEGER
);

CREATE TABLE lecturer (
    id INTEGER PRIMARY KEY AUTOINCREMENT, 
    name TEXT, 
    id_module INTEGER,
    FOREIGN KEY (id_module) REFERENCES module(id)
);

CREATE TABLE module_class (
    id_module INTEGER, 
    id_class INTEGER, 
    datetime TEXT,
    FOREIGN KEY (id_module) REFERENCES module(id),
    FOREIGN KEY (id_class) REFERENCES class(id),
    PRIMARY KEY(id_module, id_class)
);

CREATE TABLE module_room (
    id_module INTEGER, 
    id_room INTEGER,
    FOREIGN KEY (id_module) REFERENCES module(id),
    FOREIGN KEY (id_room) REFERENCES room(id),
    PRIMARY KEY(id_module, id_room)
);

COMMIT;
