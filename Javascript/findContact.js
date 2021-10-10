const fs = require('fs') //!module from nodeJs

const loadContact = () => {
    const fileBuffer = fs.readFileSync('./dirPath/contacts.json', 'utf-8')//readYourFileContact
    const contacts = JSON.parse(fileBuffer)
    return contacts
}

const findContact = (value) => {
    const contacts = loadContact()
    const contact = contacts.find(contact => contact.value === value)
    return contact
}
