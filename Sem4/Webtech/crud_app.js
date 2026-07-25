// Skeleton Express + Mongoose CRUD
const express = require('express'); const mongoose = require('mongoose');
const app = express(); app.use(express.json()); mongoose.connect('mongodb://127.0.0.1:27017/test');
const S = mongoose.model('Student', new mongoose.Schema({ name: String, email: String }));
app.post('/students', async (req, res) => res.json(await S.create(req.body)));
app.get('/students', async (req, res) => res.json(await S.find()));
app.put('/students/:id', async (req, res) => res.json(await S.findByIdAndUpdate(req.params.id, req.body, { new: true })));
app.delete('/students/:id', async (req, res) => res.json(await S.findByIdAndDelete(req.params.id)));
app.listen(3000);